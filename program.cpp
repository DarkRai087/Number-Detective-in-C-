#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

bool isInt(double num)
{
    return floor(num) == num;
}
int main()
{

    double num;
    cout << "Enter a Number : ";
    cin >> num;

    if (isInt(num))
    {
        cout << "- An Integer" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
}