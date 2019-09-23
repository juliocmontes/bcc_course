/*
Title: Lab 1
Author: Julio Montes
Date: 08.29.19

Description: Nametag project, distance between two points, area & circumference of a circle, volume & surface area of a sphere, grade calculator,
*/

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

int distance(int x1, int x2, int y1, int y2);
double area(double radius);
double circumference(double radius);
double volume(double radius);
double surfaceArea(double radius);
int grade(int pointsEarned);

int main()
{
    // local variables
    int x1, x2, y1, y2, distanceBetweenCoordinates, pointsEarned;
    double radius, pi, areaOfCircle, circumferenceOfCircle, volumeOfSphere, surfaceAreaOfSphere;

    cout << "###########################################################################\n";
    cout << "###\t\t\t    ANNUAL CONFERENCE    \t\t\t###\n";
    cout << "###########################################################################\n";
    cout << "### Name: \t\t\t\t\t\t\t\t###\n";
    cout << "###        \t\t\t\t\t\t\t\t###\n";
    cout << "###########################################################################\n";
    cout << "### Organization: \t\t\t\t\t\t\t###\n";
    cout << "###        \t\t\t\t\t\t\t\t###\n";
    cout << "###########################################################################\n";

    //calling functions
    cout << endl;
    cout << "Distance Between Coordinates: " << endl;
    distanceBetweenCoordinates = distance(x1, y1, x2, y2);
    cout << "The distance between the following coordinates: " << distanceBetweenCoordinates << endl;

    // either define radius or comment it out for prompt
    radius = 7.5;
    // cout << "Enter radius: ";
    // cin >> radius;

    // calling for area function
    cout << endl;
    cout << "Area of a Circle: " << endl;
    areaOfCircle = area(radius);
    cout << "The area of a circle is " << areaOfCircle << endl;

    cout << endl;
    cout << "Circumference of a Circle: " << endl;
    circumferenceOfCircle = circumference(radius);
    cout << "The circumference of a circle is " << circumferenceOfCircle << endl;

    cout << endl;
    cout << "Volume of a Sphere: " << endl;
    volumeOfSphere = volume(radius);
    cout << "The volume of a sphere is " << volumeOfSphere << endl;

    cout << endl;
    cout << "Surface Area of a Sphere: " << endl;
    surfaceAreaOfSphere = surfaceArea(radius);
    cout << "The surface Area of a sphere is " << setprecision(5) << surfaceAreaOfSphere << endl;

    // grade cakculator, comment out to ask for input  and uncomment within function
    cout << endl;
    cout << "Grade Calculator: " << endl;
    pointsEarned = grade(85);

    return 0;
}

// Distance between two points
int distance(int x1, int x2, int y1, int y2)
{
    int result;

    // comment in/out below to ask for input
    x1 = 2;
    x2 = 3;
    y1 = 8;
    y2 = -5;

    // cout << "Enter x1: ";
    // cin >> x1;
    // cout << "Enter y1: ";
    // cin >> y1;
    // cout << "Enter x2: ";
    // cin >> x2;
    // cout << "Enter y2: ";
    // cin >> y2;

    result = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    return result;
}

// function to find area
double area(double radius)
{
    const double PI = 3.14;
    double result;

    // cout << "Enter radius: ";
    // getline(cin,radius);
    // radius = 7.5;
    result = PI * pow(radius, 2);
    // cout << "The area of a circle is " << result << endl;

    return result;
}

// function to find circumference
double circumference(double radius)
{
    const double PI = 3.14;
    double result;

    // cout << "Enter radius: ";
    // getline(cin,radius);
    // radius = 7.5;
    result = 2.0 * PI * radius;
    // cout << "The circumference of a circle is " << result << endl;

    return result;
}

// function to find volume
double volume(double radius)
{
    const double PI = 3.14;
    double result;

    result = ((4.0 / 3) * PI * pow(radius, 3));
    return result;
}

// function to find surface area
double surfaceArea(double radius)
{
    const double PI = 3.14;
    double result;

    result = 4.0 * PI * pow((radius), 2);
    return result;
}

int grade(int pointsEarned)
{
    char grade;

    //cin >> pointsEarned;
    cout << "How many points did you score? ";

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

{
    cout << "Enter a valid number (2 digits or more): " << endl;
    cin >> number;
}