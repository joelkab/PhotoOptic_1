//
// Created by Joel Kabura on 12/20/23.
//

#include "Tools.h"
#include "iostream"
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
std::string Tools::Menue() {



    std::cout<<std::endl;
    std::cout << "1. Brightness ✨\n";
    std::cout << "2. Construct 🎨\n";
    std::cout << "3. coming soon 🌈\n";
    std::cout << "4. coming soon 🚪\n\n";

    std::cout << "Choose your option: ";
    std::cin>>input;

    return input;

}

int Tools::BRTvalues() {
    int value;
    bool check = false;

    std::cout << "I see you want to brighten your image!";
    while (check == false) {

        std::cout<<"please enter a value from 1-255: ";
        std::cin>>value;
        if(std::cin.fail()){
            check = false;
            continue;
        }
        if(value < 255 && value > 1){
            check = true;
            break;
        }

        std::cout<<"Try again \n";
    }


    return value;
}
