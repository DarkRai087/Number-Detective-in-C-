#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

bool isInt(double num)
{
    return floor(num) == num;
}
bool isRational(const string &input)
{
    return input.find('/') != string::npos;
}
bool isNatural(double num)
{
    return isInt(num) && num > 0;
}
bool isWhole(double num)
{
    return isInt(num) && num >= 0;
}
bool isIrrational(double num)
{
    return !isInt(num) && !isRational(to_string(num));
}

int main()
{
    string input;
    double num;
    cout << "Enter a Number : ";
    cin >> input;
    if (isRational(input))
    {
        istringstream ss(input);
        double numerator, denominatior;
        char slash;
        ss >> numerator >> slash >> denominatior;
        if (slash == '/' && denominatior != 0)
        {
            num = numerator / denominatior;
        }
        else
        {
            cout << " Invalid input " << endl;
            return 1;
        }
    }
    else
    {
        num = stod(input);
    }
    cout << " The number " << input << " is: " << endl;
    if (isNatural(num))
    {
        cout << "- A Natural number" << endl;
    }
    if (isWhole(num))
    {
        cout << "- A Whole number" << endl;
    }
    if (isInt(num))
    {
        cout << "- An Integer" << endl;
    }
    else if (!isIrrational(num))
    {
        cout << "- A Rational number" << endl;
    }
    else
    {
        cout << "- An Irrational number" << endl;
    }
    return 0;
}