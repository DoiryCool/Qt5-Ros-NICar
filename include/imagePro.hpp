#ifndef __IMAGEPRO_HPP_
#define __IMAGEPRO_HPP_

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <QImage>

/*********************************
 *             Struct             *
 *********************************/

static QString __imgSaveDir = "../Images/";
static QString __imgSaveNameRule;

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
    bool _laplacian = false;
    _2binary _binaryConfig;
    _2canny _cannyConfig;
};

class imagePro
{
public:
    imagePro(void);
    //file
    bool saveImage(cv::Mat const &);
    //enhancePro
    cv::Mat Laplacian(cv::Mat);
    cv::Mat logEnhance(cv::Mat);
    //utils
    QImage Mat2QImage(cv::Mat const &);

};


#endif