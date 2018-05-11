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
#include "Dog.h"

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

    Dog d;
    int legs;
    string furs;
    bool tails;
    string breed;
    string size;
    char reg;
    
    cout << "Enter breed of your dog: ";
    cin >> breed;
    d.setBreed(breed);
    cout << "Enter size of your dog(Big/Small): ";
    cin >> size;
    d.setSize(size);
    cout << "Your dog is registered already?(Y/N): ";
    cin >> reg;
    d.setRegister(reg);
    cout << "Enter the  number of legs: ";
    cin >> legs;
    d.setLeg(legs);
    cout << "Enter the color of fur: ";
    cin >> furs;
    d.setFur(furs);
    cout << "Enter the number of tail(0-No tail or 1-Has tail): ";
    cin >> tails;
    d.setTail(tails);

    cout << "" << endl;
    cout << "Dog Information" << endl;
    cout << "Breed: " << d.getBreed() << endl;
    cout << "Size: " << d.getSize() << endl;
    if(d.getRegister() == 'Y'){
        cout << "Registered: " <<d. getRegister() << "es" << endl;
    }else{
        cout << "Registered: " << d.getRegister() << "o" << endl;
    }
    cout << "Number of Legs: " << d.getLeg() << endl;
    cout << "Color of fur: " << d.getFur() << endl;
    if(d.getTail() == false){
        cout << "Number of tail: No tail" << endl;
    }else{
        cout << "Number of tail: One tail" << endl;
    }


    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
