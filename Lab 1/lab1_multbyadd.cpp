/* 

Title: Lab 1 - Multiply by Addition
Author: Julio Montes
Date: 08.29.19

Description - depending on the user's inputs, the program will multiply one of the numbers by the other 

*/

#include <iostream>

using namespace std;

int main() {
    
    int number, multiplier, counter, result = 0;


    // the number that is added multiple times
    cout << "Enter a number: ";
    cin >> number;

    // the number of times the number is added 
    cout << "Enter the times you want it multiplied: ";
    cin >> multiplier;

    // as long as counter is less than the multiplier, the number will be added to itself 
    for (counter = 1; counter <= multiplier; counter++)
    {
        result += number;
    }

    cout << "Multiplication of " << multiplier << " & " << number << " is " << result << endl;


    return 0;
}