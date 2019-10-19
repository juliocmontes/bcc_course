/*
Title: Lab 2
Author: Julio Montes
Date: 09.23.19

Description: pass the number of rows needed
*/

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 6;
    const char vowels[size]= {'a', 'e', 'i', 'o', 'u', 'y'};

    for (int count = 0; count <= size; count++) {
        cout << vowels[count] << endl;   
    }

    return 0;
}