//
// Created by Joel Kabura on 12/17/23.
//
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>
#include "ImageOption.h"

using namespace cv;
//functions for imageOption

int imageOption::openImage() {

    return 0;
}

//function to brighten a image
// returns

int imageOption::BrtImage(const cv::Mat& image) {
    Mat imageBrighness;
//create a function to display a welcome them and to collect the values.
    std::cout<<"I see you want to brighten your image!";
    std::cout<<"please enter ";


    //image.convertTo(imageBrighness, -1, 2, 0); //increase the contrast by 2

    //create a variable that will take in a value to replace 50
    //handle the input to not exceed 255 if it does set it to 255 nor less than 0
    image.convertTo(imageBrighness, -1, 1, 50);
    std::string windowNameContrastHigh = "Contrast Increased";
    namedWindow(windowNameContrastHigh, WINDOW_NORMAL);
    imshow(windowNameContrastHigh, imageBrighness);
    waitKey(0);

    return 0;
}


//here's an example of how to change the contrast
//     Mat imageContrastHigh2;
//    image.convertTo(imageContrastHigh2, -1, 2, 0); //increase the contrast by 2



//function to save an image
//https://www.opencv-srf.com/2018/01/save-images-and-videos-to-file.html