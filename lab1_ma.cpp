#include <iostream>

using namespace std;

int main()
{
    int counter, multiplier, number, result;

    cout << "Enter the times you want it multiplied: ";
    cin >> multiplier;
    cout << "Enter a number: ";
    cin >> number;

    result = 0;

    for (counter = 1; counter <= multiplier; counter++)
    {
        result += number;
    }

    cout << "Multiplication of " << multiplier << " & " << number << " is " << result << endl;

    return 0;