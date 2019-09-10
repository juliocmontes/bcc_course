// Lab 1

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

short distance(short x1, short x2, short y1, short y2);
double area(double radius);
double circumference(double radius);
double volume(double radius);
double surfaceArea(double radius);

    int main()
{
    // local variables
    short x1, x2, y1, y2, distanceBetweenCoordinates;
    double radius, pi, areaOfCircle, circumferenceOfCircle, volumeOfSphere, surfaceAreaOfSphere;

    // cout << "###########################################################################\n";
    // cout << "###\t\t\t    ANNUAL CONFERENCE    \t\t\t###\n";
    // cout << "###########################################################################\n";
    // cout << "### Name: \t\t\t\t\t\t\t\t###\n";
    // cout << "###        \t\t\t\t\t\t\t\t###\n";
    // cout << "###########################################################################\n";
    // cout << "### Organization: \t\t\t\t\t\t\t###\n";
    // cout << "###        \t\t\t\t\t\t\t\t###\n";
    // cout << "###########################################################################\n";

    //calling functions
    // distanceBetweenCoordinates = distance(x1, y1, x2, y2);
    // cout << distanceBetweenCoordinates << endl;

    radius = 7.5;
    // cout << "Enter radius: ";
    // cin >> radius;

    // calling for area function 
    areaOfCircle = area(radius);
    cout << "The area of a circle is " << areaOfCircle << endl;

    circumferenceOfCircle = circumference(radius);
    cout << "The circumference of a circle is " << circumferenceOfCircle << endl;

    volumeOfSphere = volume(radius);
    cout << "The volume of a sphere is " << volumeOfSphere << endl;

    surfaceAreaOfSphere = surfaceArea(radius);
    cout << "The surface Area of a sphere is " << setprecision(5) << surfaceAreaOfSphere << endl;

    return 0;
}

// Distance between two points
short distance(short x1, short x2, short y1, short y2)
{
    short result;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

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

double volume(double radius) {
    const double PI = 3.14;
    double result;

    result = ((4.0/3) * PI * pow(radius,3));
    return result;
}

double surfaceArea(double radius) {
    const double PI = 3.14;
    double result;
    
    result = 4.0 * PI * pow((radius),2);
    return result;
}