#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>
#include "ImageOption.h"


using namespace cv;

int main(int argc, char** argv)
{
    imageOption imgOp;

    imgOp.openImage();

    if (argc != 2) {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    std::cout<< "\n################################- Welcome to PhotoOptic - ################################\n";
    std::cout<<"                            I see your trying to edit an image, is this the right image: "<<argv[1]<< ":?. Y-yes N-no";
    std::string input;
    std::cin>>input;

    if (input == "N"){
        return -1;
    }


    Mat image;
    image = imread(argv[1], 1);
    if (!image.data) {
        printf("No image data \n");
        return -1;
    }

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    waitKey(0);

    Mat imageContrastHigh2;
    image.convertTo(imageContrastHigh2, -1, 2, 0); //increase the contrast by 2
    std::string windowNameContrastHigh2 = "Contrast Increased by 2";
    namedWindow(windowNameContrastHigh2, WINDOW_NORMAL);
    imshow(windowNameContrastHigh2, imageContrastHigh2);
    waitKey(0);

    int value = 0;
    std::cout<<"enter a value: ";
    std::cin>>value;
    switch (value) {
        case 1:
            std::cout<<"window closed \n";
            destroyWindow("Display Image"); //destroy the created window
            break;
        case 2:
            std::cout<<"wrong ";
            break;
    }

    return 0;
}

