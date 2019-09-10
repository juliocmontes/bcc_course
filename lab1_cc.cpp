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
        totalChange,    // total minus amount given
        dollarsNeeded,
        dimesNeeded,
        nickelsNeeded,
        penniesNeeded,
        quartersNeeded;

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
    cout << "Total Change: $" << totalChange << endl;

    dollarsNeeded = totalChange / DOLLAR;
    quartersNeeded = totalChange / QUARTER;
    dimesNeeded = totalChange / DIME;
    nickelsNeeded = totalChange / NICKEL;
    penniesNeeded = totalChange / PENNY;

    cout << "Dollars: " << dollarsNeeded << endl;
    cout << "Quarters: " << quartersNeeded << endl;
    cout << "Dimes : " << dimesNeeded << endl;
    cout << "Nickels : " << nickelsNeeded << endl;
    cout << "Pennies: " << penniesNeeded << endl;

    return 0;
}
