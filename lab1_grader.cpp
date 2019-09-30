/* 

Title: Lab 1 - Grader
Author: Julio Montes
Date: 08.29.19

Description - depending on the user's points input, the program will return a grade along with a message

*/

#include <iostream>

using namespace std;

int main() {
    int pointsEarned;
    char grade;

    // asks the user for their point value
    cout << "How many points did you score? ";
    cin >> pointsEarned;

    // depending on points, selects a grade 
    if (pointsEarned >= 90)
    {
        grade = 'A';
    }
    else if (pointsEarned >= 80 && pointsEarned < 90)
    {
        grade = 'B';
    }
    else if (pointsEarned >= 70 && pointsEarned < 80)
    {
        grade = 'C';
    }
    else if (pointsEarned >= 60 && pointsEarned < 70)
    {
        grade = 'D';
    }
    else if (pointsEarned >= 0 && pointsEarned < 60)
    {
        grade = 'F';
    }

    // depending on grade, a message is outputted
    switch (grade)
    {
    case 'a':
    case 'A':
        cout << "A: Excellent" << endl;
        break;
    case 'b':
    case 'B':
        cout << "B: Very Good" << endl;
        break;
    case 'c':
    case 'C':
        cout << "C: Good" << endl;
        break;
    case 'd':
    case 'D':
        cout << "D: Try Harder Next Time" << endl;
        break;
    case 'f':
    case 'F':
        cout << "F: Try Harder Next Time" << endl;
        break;

    default:
        cout << "Error!" << endl;
        break;
    }

    return 0;
}