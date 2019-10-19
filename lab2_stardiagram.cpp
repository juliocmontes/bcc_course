/*
Title: Lab 2
Author: Julio Montes
Date: 09.23.19

Description: returns a graphical view of 2^n with n being the row numbers
*/

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

// void starDiagram(int rows, char var);

int main() {
    // also n in 2^n will print diagram for it
    int rows = 6;
    char var = '*';

    int exponent = 0;
    // loop to print first rows up 2^6
    for (int i = 0; i <= rows; i++ )
    {
        exponent = pow(2, i);
        cout << string(exponent, var) << endl;
    }
    // loops back down
    for (int i = 0; i < rows; i++ )
    {
        exponent/=2;
        cout << string(exponent, var) << endl;

    }
    return 0;
}