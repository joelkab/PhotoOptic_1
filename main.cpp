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

    int desiredWidth = 400; // Replace with your desired width
    int desiredHeight = 300; // Replace with your desired height

    // Resize the image
    resize(image, image, Size(desiredWidth, desiredHeight));

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    moveWindow("Display Image", 300, 140);
    imshow("Display Image", image);
    waitKey(100);

    Mat newImage;
    bool tryagain = true;

    while (tryagain){


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

        tools.Options(newImage,image);
        tryagain = tools.TryAgain();
        if (!tryagain){
            break;
        }
        Mat retryImage = imgOp.openImage();
        image = retryImage;
        option = tools.Menue();

    }




    return 0;
}

