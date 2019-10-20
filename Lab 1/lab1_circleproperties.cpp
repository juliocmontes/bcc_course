/*
Title: Lab 1 - Circle Functions
Author: Julio Montes
Date: 08.29.19

Description: program prompts the user for a radius and will then display area, circumference, the volume, and surface
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double area(double radius);
double circumference(double radius);
double volume(double radius);
double surfaceArea(double radius);

int main()
{
    double radius, pi, areaOfCircle, 
    circumferenceOfCircle, volumeOfSphere, surfaceAreaOfSphere;
    
    cout << "Enter radius: ";
    cin >> radius;

    // calling area function
    cout << endl;
    cout << "Area of a Circle: " << endl;
    areaOfCircle = area(radius);
    cout << "The area of a circle is " << areaOfCircle << endl;

    // calling circumference function
    cout << endl;
    cout << "Circumference of a Circle: \n";
    circumferenceOfCircle = circumference(radius);
    cout << "The circumference of a circle is " << circumferenceOfCircle << endl;

    // calling volume function
    cout << endl;
    cout << "Volume of a Sphere: \n";
    volumeOfSphere = volume(radius);
    cout << "The volume of a sphere is " << volumeOfSphere << endl;

    // calling  surface area function
    cout << endl;
    cout << "Surface Area of a Sphere: \n";
    surfaceAreaOfSphere = surfaceArea(radius);
    cout << "The surface Area of a sphere is " << setprecision(5) << surfaceAreaOfSphere << endl;
    
    return 0;
}

// function to find area
double area(double radius)
{
    const double PI = 3.14;
    double result;

    result = PI * pow(radius, 2);
    return result;
}

// function to find circumference
double circumference(double radius)
{
    const double PI = 3.14;
    double result;

    result = 2.0 * PI * radius;
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