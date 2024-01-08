//
// Created by Joel Kabura on 12/17/23.
//
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>
#include "ImageOption.h"
#include "Tools.h"

using namespace cv;
//functions for imageOption

int imageOption::openImage() {

    return 0;
}

//function to brighten a image
// returns
cv::Mat imageOption::BrtImage(cv::Mat &image) {
    std::string message = " i see you want to brighten your image \n";
    Mat imageBrighness;
    Tools tools;
//create a function to display a welcome them and to collect the values.

    int brt = tools.Valid_values(message);

    image.convertTo(imageBrighness, -1, 1, brt);
    std::string windowNameContrastHigh = "Brightness Increased";
    namedWindow(windowNameContrastHigh, WINDOW_NORMAL);
    imshow(windowNameContrastHigh, imageBrighness);
    waitKey(100);

    return imageBrighness; //returns the converted image
}



cv::Mat imageOption::ContrastImage(cv::Mat &inputImage) {

    //here's an example of how to change the contrast
//     Mat imageContrastHigh2;
//    image.convertTo(imageContrastHigh2, -1, 2, 0); //increase the contrast by 2
    std::string message = " i see you want to add contrast to your image \n";
    Mat imageContrast;
    Tools tools;

    int value = tools.Valid_values(message);

    image.convertTo(imageContrast, -1, value, 0);
    std::string windowNameContrastHigh = "Contrast Increased";
    namedWindow(windowNameContrastHigh, WINDOW_NORMAL);
    imshow(windowNameContrastHigh, imageContrast);
    waitKey(100);

    return imageContrast; //returns the converted image
}


//function to save an image
//https://www.opencv-srf.com/2018/01/save-images-and-videos-to-file.html


