//
// Created by Joel Kabura on 12/20/23.
//

#include "Tools.h"
#include "iostream"
#include <cctype>
#include <opencv2/opencv.hpp>

// displays the header in the beginning
void Tools::IntroDisplay() {
    std::cout<<std::endl;
    std::cout<<"                                                                                                   \n"
               ",-.----.                                            ,----..                                        \n"
               "\\    /  \\   ,---,                ___               /   /   \\              ___                      \n"
               "|   :    \\,--.' |              ,--.'|_            /   .     :,-.----.   ,--.'|_   ,--,             \n"
               "|   |  .\\ |  |  :      ,---.   |  | :,'   ,---.  .   /   ;.  \\    /  \\  |  | :,',--.'|             \n"
               ".   :  |: :  :  :     '   ,'\\  :  : ' :  '   ,'\\.   ;   /  ` |   :    | :  : ' :|  |,              \n"
               "|   |   \\ :  |  |,--./   /   .;__,'  /  /   /   ;   |  ; \\ ; |   | .\\ .;__,'  / `--'_      ,---.   \n"
               "|   : .   |  :  '   .   ; ,. |  |   |  .   ; ,. |   :  | ; | .   : |: |  |   |  ,' ,'|    /     \\  \n"
               ";   | |`-'|  |   /' '   | |: :__,'| :  '   | |: .   |  ' ' ' |   |  \\ :__,'| :  '  | |   /    / '  \n"
               "|   | ;   '  :  | | '   | .; : '  : |__'   | .; '   ;  \\; /  |   : .  | '  : |__|  | :  .    ' /   \n"
               ":   ' |   |  |  ' | |   :    | |  | '.'|   :    |\\   \\  ',  /:     |`-' |  | '.''  : |__'   ; :__  \n"
               ":   : :   |  :  :_:,'\\   \\  /  ;  :    ;\\   \\  /  ;   :    / :   : :    ;  :    |  | '.''   | '.'| \n"
               "|   | :   |  | ,'     `----'   |  ,   /  `----'    \\   \\ .'  |   | :    |  ,   /;  :    |   :    : \n"
               "`---'.|   `--''                 ---`-'              `---`    `---'.|     ---`-' |  ,   / \\   \\  /  \n"
               "  `---`                                                        `---`             ---`-'   `----'   \n"
               "                                                                                                   ";
}
//------------------------------------
int Tools::Menue() {


    int input;
    std::cout<<std::endl;
    std::cout << "1. Brightness ✨\n";
    std::cout << "2. Construct 🎨\n";
    std::cout << "3. coming soon 🌈\n";
    std::cout << "4. coming soon 🚪\n\n";

    std::cout << "Choose your option: ";

    std::cin>>input;

    return input;

}

int Tools::Valid_values(std::string message) {
    int value;
    std::cout << message;
    while (true) {

        std::cout<<"please enter a value from 1-255: ";
        std::cin>>value;
        if(std::cin.fail()){
            std::cin.clear(); std::cin.ignore(INT_MAX,'\n');
        }
        if(value < 255 && value > 1){
            break;
        }

        std::cout<<"Try again \n";

    }


    return value;
}

int Tools::Options(const cv::Mat& image, cv::Mat& org_image) {

    display_Menue_2();

    int value;
    std::cin>>value;

    if ( value== 2){
        std::cout<<"Saving image.......\n";

        bool isSuccess = imwrite("MyImage.jpeg", image); //write the image to a file as JPEG
        //bool isSuccess = imwrite("D:/MyImage.png", image); //write the image to a file as PNG
        if (isSuccess == false)
        {
            std::cout << "Failed to save the image" << std::endl;
            std::cin.get(); //wait for a key press
            return -1;
        }

        std::cout << "Image is succusfully saved to a file" << std::endl;

    }else if (value == 3){
        std::cout<<"window closed \n";
        cv::destroyWindow("Display Image"); //destroy the created window
    }else if(value == 1){
        //discard change
        std::cout<<"Image successfully discard \n";
        image == org_image;
    }
    else{
        std::cout << "please chose a valid response" << std::endl;
    }

    return 0;
}

void Tools::display_Menue_2() {
    std::cout<<"\nPlease select an option!\n"
               "--1) Discard change--\n"
               "--2) Save Image--\n"
               "--3) Exit--\n"
               "----: ";
}

bool Tools::TryAgain() {
    std::cout<<"\nWould you like to edit another image? \n"
               "----: ";
    std::cout<<"--1) Yes\n"
               "--2) No\n"
               "----: ";
    int value = 0;
    std::cin>>value;

    if(value == 1){
        return true;
    }

    return false;
}
