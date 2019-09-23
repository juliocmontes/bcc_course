/*

Title: Multiplying by Addition
Author: Julio M.
Date: 09.22.19

Description: 
Multiplication by addition
Write a program that executes the multiplication of two numbers entered by the user using only the addition operation.
For example, if the user enters 3 and 4, the program computes the multiplication of these numbers by adding the number 4 three times (i.e., 3 * 4 = 4 + 4 + 4)
 */

#include <iostream>

using namespace std;

int main()
{
    int counter, multiplier, number, result;

    cout << "Enter the times you want it multiplied: ";
    cin >> multiplier;
    cout << "Enter a number: ";
    cin >> number;

    result = 0;

    for (counter = 1; counter <= multiplier; counter++)
    {
        result += number;
    }

    cout << "Multiplication of " << multiplier << " & " << number << " is " << result << endl;

    return 0;
}