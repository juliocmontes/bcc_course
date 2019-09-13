/*

Program Name: Grade Assignment 
Author: Julio M.
Date: 08/12/19

Points Earned   Grade Message String
0 <=x<60        F Try Harder Next Time 
60 <= x < 70    D Try Harder Next Time 
70 <= x < 80    C Good 
80 <= x < 90    B Very Good
90 <= x         A Excellent
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int pointsEarned;
    char grade;

    cout << "How many points did you score? ";
    cin >> pointsEarned;

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