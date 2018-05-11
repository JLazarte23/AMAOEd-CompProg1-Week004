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
#include "Mammal.h"

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

    Mammal Mammal1;
    int legs;
    string furs;
    bool tails;
    
    cout << "Enter number of legs: ";
    cin >> legs;
    Mammal1.setLeg(legs);
    cout << "Enter color of fur: ";
    cin >> furs;
    Mammal1.setFur(furs);
    cout << "Enter 0-No tail or 1-Has tail: ";
    cin >> tails;
    Mammal1.setTail(tails);

    if(Mammal1.getTail() == 0){
    cout << "Your mammal has " << Mammal1.getLeg() << " legs, " << Mammal1.getFur() << " fur and no tail." << endl;
    }else{
        cout << "Your mammal has " << Mammal1.getLeg() << " legs, " << Mammal1.getFur() << " fur and has a tail." << endl;
    }


    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
