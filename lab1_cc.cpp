// Lab 1 Change Calculator

/*
Write a program that directs a cashier how to give change. The program has two inputs : the amount due and the amount received from the customer.
Display the dollars, quarters, dimes, nickels, and pennies that the customer should receive
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib> /* rand */

using namespace std;

int main()
{
    double DOLLAR = 1.0;
    double QUARTER = 0.25;
    double DIME = 0.10;
    double NICKEL = 0.05;
    double PENNY = 0.01;
    double amountDue,   //total due
        amountReceived, //amount received
        totalChange,    //total minus amount given
        dollarsNeeded,  //dollars needed in change
        dimesNeeded,    //dimes needed in change
        nickelsNeeded,  //nickels needed in change
        penniesNeeded,  //pennies needed in change
        quartersNeeded; //quarters needed in change

    cout << "Enter total amount due: $";
    cin >> amountDue;
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
