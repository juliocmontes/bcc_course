/*
Title: Lab 1
Author: Julio Montes
Date: 08.29.19

Description: Nametag project, distance between two points, area & circumference of a circle, volume & surface area of a sphere, grade calculator, tax calculator, multiplying by addition, 
*/

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

// specific functions here
int distance(int x1, int x2, int y1, int y2);
int grade(int pointsEarned);
int reversedNumber(int number);
int taxedIncome(int income);
int multiplyByAdding(int number, int multiplier);
bool needNameTag(char needTag);
double area(double radius);
double circumference(double radius);
double volume(double radius);
double surfaceArea(double radius);
double changeCalculator(double amountDue, double amountReceived);
void drawNameTag();


int main()
{
    // local variables
    int x1, x2, y1, y2,  
    pointsEarned, income, 
    multiplier, number, 
    displayMultiplicationByAdding,
    displayReversedNumber, 
    displayTaxedIncome,
    distanceBetweenCoordinates ;
    double radius, pi, amountDue, amountReceived,
    areaOfCircle, circumferenceOfCircle, volumeOfSphere, 
    surfaceAreaOfSphere, calculateChange ;
    bool displayNametag;
    char needTag;

    // nametag function
    // displayNametag = needNameTag('y');
    drawNameTag();

    //calling functions
    cout << endl;
    cout << "Distance Between Coordinates: \n";
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
    cout << "Circumference of a Circle: \n";
    circumferenceOfCircle = circumference(radius);
    cout << "The circumference of a circle is " << circumferenceOfCircle << endl;

    cout << endl;
    cout << "Volume of a Sphere: \n";
    volumeOfSphere = volume(radius);
    cout << "The volume of a sphere is " << volumeOfSphere << endl;

    cout << endl;
    cout << "Surface Area of a Sphere: \n";
    surfaceAreaOfSphere = surfaceArea(radius);
    cout << "The surface Area of a sphere is " << setprecision(5) << surfaceAreaOfSphere << endl;

    // grade calculator, comment out to ask for input  and uncomment within function
    cout << endl;
    cout << "Grade Calculator: \n";
    pointsEarned = grade(85);
    cout << endl;

    // function to reverse a number entered within brackets, in this case 423 
    displayReversedNumber = reversedNumber(423);
    cout << "The reversed number is: " << displayReversedNumber << endl;

    // calls tax calculator
    cout << "Tax Calculator: \n";
    displayTaxedIncome = taxedIncome(125000);
    cout << endl;

    // number , multiplier need to be replaced in order for user input
    displayMultiplicationByAdding = multiplyByAdding(4, 3);
    cout << endl;

    cout << "Change Calculator: \n";
    calculateChange = changeCalculator(18.64, 50.23);

    return 0;
}


// nametag creation 
bool needNameTag(char needTag)
{
    // cout << "Would you like a nametag?: y/n ";
    // cin >> needTag;

    switch (needTag) 
    {
        case 'y':     
            {cout << "###########################################################################\n";
            cout << "###\t\t\t    ANNUAL CONFERENCE    \t\t\t###\n";
            cout << "###########################################################################\n";
            cout << "### Name: \t\t\t\t\t\t\t\t###\n";
            cout << "###        \t\t\t\t\t\t\t\t###\n";
            cout << "###########################################################################\n";
            cout << "### Organization: \t\t\t\t\t\t\t###\n";
            cout << "###        \t\t\t\t\t\t\t\t###\n";
            cout << "###########################################################################\n";}
        break;
        case 'n':
        break;
        default: cout << "Until Next Time!\n";
    }
    return 0;
}

void drawNameTag(){
    cout << "###########################################################################\n";
    cout << "###\t\t\t    ANNUAL CONFERENCE    \t\t\t###\n";
    cout << "###########################################################################\n";
    cout << "### Name: \t\t\t\t\t\t\t\t###\n";
    cout << "###        \t\t\t\t\t\t\t\t###\n";
    cout << "###########################################################################\n";
    cout << "### Organization: \t\t\t\t\t\t\t###\n";
    cout << "###        \t\t\t\t\t\t\t\t###\n";
    cout << "###########################################################################\n";
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

// function to display grade based on points earned inputted above 
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

// reversing a number with a while loop, uncomment out cout for input
int reversedNumber(int number)
{
    int remainder, result = 0;
    // cout << "Enter a valid number (2 digits or more): ";
    // cin >> number;

    while (number > 0)
    {
        remainder = number % 10;
        result = result * 10 + floor(remainder);
        number /= 10;
    }
    return result;
}

/* Tax Calculator
Write a program to prompt for the income, then calculate and display the initial amount, the amount after deductions, and the deducted amount. Use good programming practices. 
Display messages so that the results are understandable.
Assume individuals are taxed at an incremental rate as given below:
Incremental Income
0 to $ 30,000.00           0%
$30,000.01 to $50,000      10% 
$50,000.01 to $100,000     20%
$100,000.01 to $200,000    30% 
$200,000.01 to $250,000    35% 
>250.000.01                40%

Note that the above ranges are not total income but additional income. For example, if one earns $125,000 per year, then there is no tax on the first $30,000. 
The next $20,000 is taxed at a rate of 10 percent, the next $50,000 is taxed at a rate of 20 percent, and the remaining $25,000 is taxed at a rate of 30 percent.
*/
int taxedIncome(int income)
{
    int initialAmount,
        amountAfterDeductions,
        deductedAmount,
        taxedAmount;

    // cout << "What is your total income? ";
    // cin >> income;

    // cout << "Your income before deductions is: " << income << endl;

    initialAmount = income;

    if (income <= 30000)
    {
        taxedAmount = 0;
        deductedAmount = 0;
        amountAfterDeductions = income;
    }
    else if (income > 30000 && income <= 50000)
    {
        income -= 30000;
        taxedAmount = income * .1;
        amountAfterDeductions = initialAmount - taxedAmount;
    }
    else if (income > 50000 && income <= 100000)
    {
        income -= 50000;
        taxedAmount = (20000 * .1) + (income * .2);
        amountAfterDeductions = initialAmount - taxedAmount;
    }
    else if (income > 100000 && income <= 200000)
    {
        income -= 100000;
        taxedAmount = (20000 * .1) + (50000 * .2) + (income * .3);
        amountAfterDeductions = initialAmount - taxedAmount;
    }
    else if (income > 200000 && income <= 250000)
    {
        income -= 200000;
        taxedAmount = (20000 * .1) + (50000 * .2) + (100000 * .3) + (income * .35);
        amountAfterDeductions = initialAmount - taxedAmount;
    }
    else if (income > 250000)
    {
        income -= 250000;
        taxedAmount = (20000 * .1) + (50000 * .2) + (100000 * .3) + (50000 * .4) + (income * .4);
        amountAfterDeductions = initialAmount - taxedAmount;
    }

    cout << "Your taxed amount: " << taxedAmount << endl;
    cout << "Your total after deductions : " << amountAfterDeductions << endl;

    return 0;
}

// function to multiply through addition using loop
int multiplyByAdding(int number, int multiplier)
{
    int counter, result = 0;

    // cout << "Enter a number: ";
    // cin >> number;
    // cout << "Enter the times you want it multiplied: ";
    // cin >> multiplier;

    for (counter = 1; counter <= multiplier; counter++)
    {
        result += number;
    }

    cout << "Multiplication of " << multiplier << " & " << number << " is " << result << endl;

    return 0;
}

// calculator that will calculate exact change
double changeCalculator(double amountDue, double amountReceived)
{
    double DOLLAR = 1.0;
    double QUARTER = 0.25;
    double DIME = 0.10;
    double NICKEL = 0.05;
    double PENNY = 0.01;
    double totalChange,    //total minus amount given
        dollarsNeeded,  //dollars needed in change
        dimesNeeded,    //dimes needed in change
        nickelsNeeded,  //nickels needed in change
        penniesNeeded,  //pennies needed in change
        quartersNeeded; //quarters needed in change

    // cout << "Enter total amount due: $";
    // cin >> amountDue;
    cout << "Total due: $" << amountDue << "\n";
    // cout << "Enter payment: $";
    // cin >> amountReceived;
    cout << "Amount received: $" << amountReceived << "\n";

    while (amountDue > amountReceived)
    {
        cout << "This isn't enough...\n";
        cout << "Enter payment: ";
        cin >> amountReceived;
    }

    totalChange = fabs(amountDue - amountReceived); // returns absolute value for change
    cout << fixed << setprecision(2) << "Total Change: $" << totalChange << endl;

    dollarsNeeded = floor(totalChange / DOLLAR);
    totalChange -= dollarsNeeded;

    quartersNeeded = floor(totalChange / QUARTER);
    totalChange -= quartersNeeded * .25;

    dimesNeeded = floor(totalChange / DIME);
    totalChange -= dimesNeeded * .10;

    nickelsNeeded = floor(totalChange / NICKEL);
    totalChange -= nickelsNeeded * .05;

    penniesNeeded = totalChange / PENNY;

    cout << fixed << setprecision(0) << "Dollars: " << dollarsNeeded << endl;
    cout << fixed << setprecision(0) << "Quarters: " << quartersNeeded << endl;
    cout << fixed << setprecision(0) << "Dimes : " << dimesNeeded << endl;
    cout << fixed << setprecision(0) << "Nickels : " << nickelsNeeded << endl;
    cout << fixed << setprecision(0) << "Pennies: " << penniesNeeded << endl;

    return 0;
}