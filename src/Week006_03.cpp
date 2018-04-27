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

    string num1 = "";
    string num2 = "";
    float digit1 = 0;
    float digit2 = 0;
    float qoutient = 0;

    cout << "Enter first number: ";
    getline(std::cin, num1);
    stringstream(num1) >> digit1;

    cout << "Enter second number: ";
    getline(std::cin, num2);
    stringstream(num2) >> digit2;

    qoutient = digit1/digit2;
    cout << digit1 << "/" << digit2 << "= " << qoutient;

    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    _pause();
    return EXIT_SUCCESS;
}
