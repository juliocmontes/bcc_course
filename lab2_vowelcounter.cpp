/*
Title: Lab 2
Author: Julio Montes
Date: 09.23.19

Must compile with C11 for the following loop method

const char vowels[]= {'a', 'e', 'i', 'o', 'u', 'y'};
for (char letter : vowels)

Description: passing a single word string will loop through and count the number of vowels and consonants 
*/

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>


using namespace std;

int main() {
    // initializing the word variable
    const string word = "hippopotamus";
    // array to hold vowels
    const char vowels[]= {'a', 'e', 'i', 'o', 'u', 'y'};
    // counter for vowel
    int vowelCount = 0;

    // iterates through the string
    for( int i = 0; i < word.length(); i++){
        for (char letter : vowels)
        // iterates through the string and compares each character to one in the array and counts if it's a vowel
        if (word[i] == letter) {
            vowelCount++;
            }
    }
    // subtracting vowels from length of  string to find vowels
    int consonantCount = word.length() - vowelCount;

    // displaying the message to user
    cout << "The word contains " << vowelCount << " vowels and " << consonantCount << " consonants." <<endl; 

    return 0;
}