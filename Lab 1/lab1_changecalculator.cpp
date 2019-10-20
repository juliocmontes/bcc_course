/*
Title: Lab 1 - Change Calculator
Author: Julio Montes
Date: 08.29.19

Description: program calculates the exact change needs dependent on due and tender given
*/

#include <iostream>
#include <cmath>
#include <iomanip> //needed for set precision

using namespace std;

int main(){
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
        quartersNeeded, //quarters needed in change
        amountDue, amountReceived; 


    // ask cashier for total
    cout << "Enter total amount due: $";
    cin >> amountDue;

    // enter amount due
    cout << "Total due: $" << amountDue << "\n";
    cout << "Enter payment: $";
    cin >> amountReceived;

    cout << "Amount received: $" << amountReceived << "\n";

    while (amountDue > amountReceived)
    {
        cout << "This isn't enough...\n";
        cout << "Enter payment: ";
        cin >> amountReceived;
    }

    // displays change
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

    // displays break down of each bill
    cout << fixed << setprecision(0) << "Dollars: " << dollarsNeeded << endl;
    cout << fixed << setprecision(0) << "Quarters: " << quartersNeeded << endl;
    cout << fixed << setprecision(0) << "Dimes : " << dimesNeeded << endl;
    cout << fixed << setprecision(0) << "Nickels : " << nickelsNeeded << endl;
    cout << fixed << setprecision(0) << "Pennies: " << penniesNeeded << endl;

    return 0;
}
