#ifndef __OCR_CRNNNET_H__
#define __OCR_CRNNNET_H__

#include "OcrStruct.h"
#include "ncnn/net.h"
#include <opencv/cv.hpp>

class CrnnNet {
public:

    ~CrnnNet();

    void setNumThread(int numOfThread);

    void setGpuIndex(int gpuIndex);

    bool initModel(std::string &pathStr);

    std::vector<TextLine> getTextLines(std::vector<cv::Mat> &partImg, const char *path, const char *imgName);

private:
    bool isOutputDebugImg = false;
    int numThread;
    ncnn::Net net;
    std::vector<std::string> keys;

    const int dstHeight = 32;
    const float meanValues[3] = {127.5, 127.5, 127.5};
    const float normValues[3] = {1.0 / 127.5, 1.0 / 127.5, 1.0 / 127.5};

    TextLine scoreToTextLine(const float *srcData, int h, int w);

    TextLine getTextLine(cv::Mat &src);
};


#endif //__OCR_CRNNNET_H__
