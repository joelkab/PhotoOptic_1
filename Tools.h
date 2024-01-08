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
    int Menue();
    int Valid_values(std::string message);
    int TryAgain(const cv::Mat& image);


};


#endif //PHOTOOPTIC_TOOLS_H
