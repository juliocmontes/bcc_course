// Tax Calculator

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

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int income,
        initialAmount,
        amountAfterDeductions,
        deductedAmount,
        taxedAmount;

    cout << "What is your total income? ";
    cin >> income;

    cout << "Your income before deductions is: " << income << endl;

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