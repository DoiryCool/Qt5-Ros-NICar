#include "../include/image_process.hpp"

ImageProcess::ImageProcess(void)
{
}

// file
bool ImageProcess::saveImage(cv::Mat const &src)
{
    __imgSaveDir = "../Images/";
    __imgSaveDir.append(__imgSaveNameRule);
    __imgSaveDir.append(".jpg");
    return cv::imwrite(__imgSaveDir.toStdString(), src);
}

// enhancePro
cv::Mat ImageProcess::logEnhance(cv::Mat src)
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

cv::Mat ImageProcess::Laplacian(cv::Mat src)
{
    cv::Mat LaplacianImg;
    cv::Mat kernel = (cv::Mat_<float>(3, 3) << 0, -1, 0, 0, 5, 0, 0, -1, 0);
    filter2D(src, LaplacianImg, CV_8UC3, kernel);
    return LaplacianImg;
}

// utils
QImage ImageProcess::Mat2QImage(cv::Mat const &src)
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

bool ImageProcess::imageProcessVectorAdd(int number)
{
    QVector<int>::iterator itr = staticImageProcessVector.begin();
    while (itr != staticImageProcessVector.end())
    {
        if (*itr == number)
        {
            return false;
        }
        else
        {
            ++itr;
        }
    }
    staticImageProcessVector.append(number);
    return true;
}

bool ImageProcess::imageProcessVectorDelete(int number)
{
    QVector<int>::iterator itr = staticImageProcessVector.begin();
    while (itr != staticImageProcessVector.end())
    {
        if (*itr == number)
        {
            itr = staticImageProcessVector.erase(itr);
        }
        else
        {
            ++itr;
        }
    }
    return true;
}

QVector<int> ImageProcess::returnImageProcessVector(void){
    return staticImageProcessVector;
}