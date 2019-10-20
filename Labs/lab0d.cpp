// Program to print out four triangles

#include <iostream>

using namespace std;

void triangle()
{
    cout << "  *\n ***\n*****\n";
}


void another_func()
{
    cout << "Inside another_func" << endl;
    triangle();
    cout << "Leaving another_func" << endl;
}

int main()
{
    cout << "Wait for the triangle folks..." << endl;
    triangle(); // call to triangle from main
    cout << "Calling another_func" << endl;
    another_func(); // calling triangle via another_func
    cout << "That's all folks!" << endl;
    return 0;
}
