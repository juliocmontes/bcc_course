/* 

Title: Lab 1 - Number Reversal
Author: Julio Montes
Date: 08.29.19

Description - will reverse the user's numerical input 

*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int number, remainder, result = 0;


    cout << "Enter a valid number (2 digits or more): ";
    cin >> number;

    while (number > 0)
    {
        remainder = number % 10;
        result = result * 10 + floor(remainder);
        number /= 10;
    }

    cout << result << endl;
    return result;
}