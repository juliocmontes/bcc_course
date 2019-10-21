#include <iostream>
#include <cmath>
using namespace std;

// mortgage calculator function
double mortgageCalculator(double principal, double rate, double years);

int main()
{

    // local variables
    double principal, rate, years;

    cout << "How much is the principal amount ";
    cin >> principal;
    cout << "What is the yearly rate? (percentage w/o %) ";
    cin >> rate;
    cout << "Term of mortgage (in years) ";
    cin >> years;



    cout  << "Your monthly payment is $" << mortgageCalculator(principal, rate, years) << endl;
    cout << "Your monthly payment is $" << mortgageCalculator(250000, 7.5, 30) << endl;
    cout << "Your monthly payment is $" << mortgageCalculator(250000, 6, 15) << endl;
    cout << "Your monthly payment is $" << mortgageCalculator(500000, 6, 30) << endl;

    return 0;
}

double mortgageCalculator(double principal, double rate, double years)
{
    rate = rate / 100.0;

    double result, monthlyRate = rate / 12.0;

    result = (principal * monthlyRate) / (1 - (1 / pow((1 + monthlyRate), (years *12))));
    
    return result;
}