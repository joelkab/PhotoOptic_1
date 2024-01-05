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


    tools.IntroDisplay();
    tools.Menue();

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

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    waitKey(100);

    Mat newImage = imgOp.BrtImage(image);
    tools.TryAgain(newImage);


    return 0;
}

