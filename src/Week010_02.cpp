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
#include "Person.h"

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
    p.setName(name);
    
    cout << "Enter your address: ";
    getline(std::cin, address);
    p.setAddress(address);
    
    cout << "Enter your gender(M or F): ";
    getline(std::cin, gender);
    p.setGender(gender);
    
    cout << "Enter your occupation: ";
    getline(std::cin, occupation);
    p.setOccupation(occupation);
    
    cout << "Enter your age: ";
    std::cin >> age;
    p.setAge(age);
    
    

    cout << "" << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "Address: " << p.getAddress() << endl;
    cout << "Age: " << p.getAge() << endl;
    cout << "Gender: " << p.getGender() << endl;
    cout << "Occupation: " << p.getOccupation() << endl;



    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
