/*
Title: Lab 1 - Distance Between Points
Author: Julio Montes
Date: 08.29.19

Description: prints the distance between coordinates 
*/

#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main()
{
    int x1, x2, y1, y2, result;

    // comment in/out below to ask for input

    x1 = 2;
    x2 = 3;
    y1 = 8;
    y2 = -5;

    // cout << "Enter x1: ";
    // cin >> x1;
    // cout << "Enter y1: ";
    // cin >> y1;
    // cout << "Enter x2: ";
    // cin >> x2;
    // cout << "Enter y2: ";
    // cin >> y2;

    // multiples the values
    result = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    // returns the result above
    cout << "The distance between " << "(" << x1 << ", " << y1 << ")" << " and " << "(" << x2 << "," << y2<< ") " << result <<endl;

    return 0  ;
}

