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
#include "Polygon.h"

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

    Polygon poly;
    int side = 0;
    string color = "";
    
    cout << "Enter number of side of Polygon: ";
    cin >> side;
    poly.Side(side);
    cout << "Enter your color: ";
    cin >> color;
    poly.Color(color);

    cout << "" << endl;
    
    switch(poly.GetSide()){
        case 3:
            cout << "Triangle" << endl;
            cout << "Side: " << poly.GetSide() << endl;
            cout << "Color: " << poly.GetColor();
        break;
        case 4:
            cout << "Square" << endl;
            cout << "Side: " << poly.GetSide() << endl;
            cout << "Color: " << poly.GetColor();
        break;
        case 5:
            cout << "Polygon" << endl;
            cout << "Side: " << poly.GetSide() << endl;
            cout << "Color: " << poly.GetColor();
        break;
        case 6:
            cout << "Hexagon" << endl;
            cout << "Side: " << poly.GetSide() << endl;
            cout << "Color: " << poly.GetColor();
        break;
        case 7:
            cout << "Heptagon" << endl;
            cout << "Side: " << poly.GetSide() << endl;
            cout << "Color: " << poly.GetColor();
        break;
        case 8:
            cout << "Octagon" << endl;
            cout << "Side: " << poly.GetSide() << endl;
            cout << "Color: " << poly.GetColor();
        break;
        case 9:
            cout << "Nonagon" << endl;
            cout << "Side: " << poly.GetSide() << endl;
            cout << "Color: " << poly.GetColor();
        break;
        case 10:
            cout << "Pentagon" << endl;
            cout << "Side: " << poly.GetSide() << endl;
            cout << "Color: " << poly.GetColor();
        break;
        default:
            cout << "Invalid input." << endl;
            break;
    }



    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    cout << "" << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
