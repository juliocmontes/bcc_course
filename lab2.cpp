/*
Title: Lab 2
Author: Julio Montes
Date: 09.23.19

Description: 
*/

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

void starDiagram(int rows, char var);

int main() {

    int rows;
    char var;

    // calls the star program function
    starDiagram(7, '*');

return 0;
}


// Star Diagram function
void starDiagram(int rows, char var) 
{
    int reverse, exponent = 0;
    for (int i = 0; i < rows; i++ )
    {
        exponent = pow(2, i);
        cout << string(exponent, var) << endl;
    }

    {
        exponent/=2;
        cout << string(exponent, var) << endl;
    }
}

