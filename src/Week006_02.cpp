/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    string num = "";
    int digit = 0;
    cout << "Input an integer: ";
    getline(std::cin, num);
    stringstream(num) >> digit;
    switch(digit){
        case 0:
            cout << "Hello World";
        break;
        case 1:
            cout << "I am a Groot";
        break;
        case 2:
            cout << "To the Top";
        break;
        case 3:
            cout << "Where is the horizon";
        break;
        case 4:
            cout << "I do not know";
        break;
        default:
            cout << "Yeah, I will";
        break;
    }
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    _pause();
    return EXIT_SUCCESS;
}
