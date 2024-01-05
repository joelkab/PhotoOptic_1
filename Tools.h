//
// Created by Joel Kabura on 12/20/23.
//
#include "iostream"
#include <opencv2/opencv.hpp>

#ifndef PHOTOOPTIC_TOOLS_H
#define PHOTOOPTIC_TOOLS_H


class Tools {
    std::string input;
public:
    void IntroDisplay();
    std::string Menue();
    int BRTvalues();
    int TryAgain(const cv::Mat& image);


};


#endif //PHOTOOPTIC_TOOLS_H
