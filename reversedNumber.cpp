
#include <iostream>

using namespace std;

int reversedNumber(int number);

int main()
{
    int displayReversedNumber ;
    displayReversedNumber = reversedNumber(423);

    return 0;
}

int reversedNumber(int number)
{
    int number, remainder, result, reverse = 0;
    cout << "Enter a valid number (2 digits or more): " << endl;
    cin >> number;

    while (number > 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    return result;
}