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
   
    float firstVar;
    float secVar = 14.3;

    float &refFirstVar = secVar;
    float *ptrSecVar = &secVar;

    cout << "Value of second variable: "<< secVar << endl;
    cout << "Address of second variable: "<< ptrSecVar << endl;


    float *ptrFirstVar = &refFirstVar;
    cout << "Value of first variable: "<< *ptrFirstVar << endl;
    cout << "Address of first variable: "<< &refFirstVar << endl;

    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}