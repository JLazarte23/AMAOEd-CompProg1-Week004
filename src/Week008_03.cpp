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

    int num[6], i = 0 ,j = 0, hold = 0;

    cout << "Enter first number: ";
    std::cin >> num[0];

    cout << "Enter second number: ";
    std::cin >> num[1];

    cout << "Enter third number: ";
    std::cin >> num[2];

    cout << "Enter fourth number: ";
    std::cin >> num[3];

    cout << "Enter fifth number: ";
    std::cin >> num[4];

    cout << "Enter sixth number: ";
    std::cin >> num[5];

    cout << "In ascending order: " << endl;
    for(i = 0; i < 6; i++)                                                                
        {                                                                        
            for(j = i+1; j < 6 ; j++)                                                             
            {          
                    if(num[i] > num[j]){
                        hold = num[i];
                        num[i] = num[j];
                        num[j] = hold;
                    }
            }
            cout << num[i] << endl;                                                                                                                                 
        }
    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
