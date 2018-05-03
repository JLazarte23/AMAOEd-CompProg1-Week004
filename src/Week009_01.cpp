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
int divide(int x, int y){
    cout << "The quotient is " << x/y << endl;
    return x/y;
}
int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    int dividend = 0, divisor = 0;
    string rank[6] = {"1st","2nd","3rd","4th","5th","6th"};
    
    int j = 0;
    for(int i = 0; i < 3; i++){
        cout << "Enter " << rank[j]<<" number: ";
        cin >> dividend;
        if(dividend <= 0){
            cout << "Invalid input." << endl;
            system("PAUSE");
            return EXIT_SUCCESS;
        }
        cout << "Enter " << rank[j+1]<<" number: ";
        cin >> divisor;
        if(divisor <= 0){
            cout << "Invalid input." << endl;
            system("PAUSE");
            return EXIT_SUCCESS;
        }
        divide(dividend, divisor);
        cout << "" << endl;
        j+=2;
    }
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
