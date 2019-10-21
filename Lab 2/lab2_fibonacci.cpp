/*
Title: Lab 2 - Fibonacci Numbers
Author: Julio Montes
Date: 09.23.19

Description: passing a single word string will loop through and count the number of vowels and consonants 
*/

#include <iostream>
#include <cmath>

using namespace std;

// calling fibonacci function
int fibonacci(int n);

int main()
{

    //making it display on the console after calling it
    cout << fibonacci(9) << endl;

    return 0;
}


int fibonacci(int n)
{
    while (n < 0)
    {
        // doesn't allow negative numbers 
        cout << "incorrect input" << endl;
    }
    // predefining the first number
    if (n == 1)
    {
        return 0;
    }
    // predefiing the second number
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        // loops through this for n once again for fibonacci
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    return 0;
}

