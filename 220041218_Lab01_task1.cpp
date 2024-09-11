#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d;
    char slash;

    cout << "Enter first fraction (a/b): ";
    string input1;
    getline(cin, input1);
    stringstream ss1(input1);
    ss1 >> a >> slash >> b;


    cout << "Enter second fraction (c/d): ";
    string input2;
    getline(cin, input2);
    stringstream ss2(input2);
    ss2 >> c >> slash >> d;


    int numerator = a * d + b * c;
    int denominator = b * d;

    cout << "Sum = " << numerator << "/" << denominator << endl;

    return 0;
}
