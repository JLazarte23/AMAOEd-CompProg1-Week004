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
#include "person.h"

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

    Person p;
    string name = "", address = "", gender = "", occupation = "";
    int age = 0;
    
    cout << "Enter your name: ";
    getline(std::cin, name);
    p.Name(name);
    
    cout << "Enter your address: ";
    getline(std::cin, address);
    p.Address(address);
    
    cout << "Enter your gender(M or F): ";
    cin >> gender;
    p.Gender(gender);
    
    cout << "Enter your age: ";
    cin >> age;
    p.Age(age);
    
    cout << "Enter your occupation: ";
    cin >> occupation;
    p.Occupation(occupation);

    cout << "" << endl;
    cout << "Name: " << p.GetName() << endl;
    cout << "Address: " << p.GetAddress() << endl;
    cout << "Age: " << p.GetAge() << endl;
    cout << "Gender: " << p.GetGender() << endl;
    cout << "Occupation: " << p.GetOccupation() << endl;



    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
