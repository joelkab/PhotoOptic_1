#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>
#include "Tools.h"

class imageOption{
private:
///image name
std::string ImageName;

//etc

public:
//default constructor to init the values
//function to check if the image exist
int openImage();
//brightening
cv::Mat BrtImage( cv::Mat& inputImage);
//darkening
//contrast
//etc




//no need for a deconstructor sice were not acessing memory

};