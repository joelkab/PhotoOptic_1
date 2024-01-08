#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>
#include "ImageOption.h"
#include "Tools.h"


using namespace cv;

int main(int argc, char** argv)
{
    imageOption imgOp;
    Tools tools;



    if (argc != 2) {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread(argv[1], 1);
    if (!image.data) {
        printf("No image data \n");
        return -1;
    }

    tools.IntroDisplay();
    int option = tools.Menue();

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    waitKey(100);

    Mat newImage;

    switch (option) {
        case 1:
             newImage = imgOp.BrtImage(image);
            break;
        case 2:
             newImage = imgOp.ContrastImage(image);
            break;
        default:
            std::cout<<"wrong input";
    }

    tools.TryAgain(newImage);


    return 0;
}

