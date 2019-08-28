// Lab 1

#include <iostream>
#include <cmath>
using namespace std;

short distance(short x1, short x2, short y1, short y2);
short area(double radius);

int main()
{
    // local variables
    short x1, x2, y1, y2, distanceBetweenCoordinates;
    double radius, pi, areaOfCircle;

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
    distanceBetweenCoordinates = distance(x1, y1, x2, y2);
    cout << distanceBetweenCoordinates << endl;

    areaOfCircle = area(radius);
    cout << areaOfCircle << endl;
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

double area(double radius)
{
    const double PI = 3.14;
    double result;

    cout << "Enter radius: ";
    cin >> radius;
    result = PI * pow(radius, 2);

    return result;
}