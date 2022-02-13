#ifndef __IMAGEPRO_H_
#define __IMAGEPRO_H_

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <QImage>

/*********************************
 *            Struct             *
 * ******************************/
struct _2canny
{
    bool _ifCanny = false;
    double lowThreshold = 10;
    double highThreshold = 100;
    int Kernel_size = 3;
};

struct _2binary
{
    bool _ifBinary = false;
    double threshold = 100;
    double max_value = 255;
    int threshold_type = 0;
};

struct imgConfig
{
    bool _grayConfig = false;
    bool _logEnhance = false;
    _2binary _binaryConfig;
    _2canny _cannyConfig;
};

static bool saveImage(cv::Mat const &src, QString ruledName = "Picture")
{
    ruledName.append(".jpg");

    cv::imwrite("", src);
}

static QImage Mat2QImage(cv::Mat const &src)
{
    QImage dest(src.cols, src.rows, QImage::Format_ARGB32);

    const float scale = 255.0;

    if (src.depth() == CV_8U)
    {
        if (src.channels() == 1)
        {
            for (int i = 0; i < src.rows; ++i)
            {
                for (int j = 0; j < src.cols; ++j)
                {
                    int level = src.at<quint8>(i, j);
                    dest.setPixel(j, i, qRgb(level, level, level));
                }
            }
        }
        else if (src.channels() == 3)
        {
            for (int i = 0; i < src.rows; ++i)
            {
                for (int j = 0; j < src.cols; ++j)
                {
                    cv::Vec3b bgr = src.at<cv::Vec3b>(i, j);
                    dest.setPixel(j, i, qRgb(bgr[2], bgr[1], bgr[0]));
                }
            }
        }
    }
    else if (src.depth() == CV_32F)
    {
        if (src.channels() == 1)
        {
            for (int i = 0; i < src.rows; ++i)
            {
                for (int j = 0; j < src.cols; ++j)
                {
                    int level = scale * src.at<float>(i, j);
                    dest.setPixel(j, i, qRgb(level, level, level));
                }
            }
        }
        else if (src.channels() == 3)
        {
            for (int i = 0; i < src.rows; ++i)
            {
                for (int j = 0; j < src.cols; ++j)
                {
                    cv::Vec3f bgr = scale * src.at<cv::Vec3f>(i, j);
                    dest.setPixel(j, i, qRgb(bgr[2], bgr[1], bgr[0]));
                }
            }
        }
    }

    return dest;
}

static cv::Mat logEnhance(cv::Mat src)
{
    cv::Mat imageLog(src.size(), CV_32FC3);
    for (int i = 0; i < src.rows; i++)
    {
        for (int j = 0; j < src.cols; j++)
        {
            imageLog.at<cv::Vec3f>(i, j)[0] = log(1 + src.at<cv::Vec3b>(i, j)[0]);
            imageLog.at<cv::Vec3f>(i, j)[1] = log(1 + src.at<cv::Vec3b>(i, j)[1]);
            imageLog.at<cv::Vec3f>(i, j)[2] = log(1 + src.at<cv::Vec3b>(i, j)[2]);
        }
    }
    normalize(imageLog, imageLog, 0, 255, CV_MINMAX);
    convertScaleAbs(imageLog, imageLog);
    return imageLog;
}
#endif