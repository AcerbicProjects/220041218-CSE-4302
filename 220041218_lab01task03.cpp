#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

struct frac {
    int numerator;
    int denominator;
};

int main() {
    vector<frac> x(2);

    frac f;

    cout << "Enter the first fraction(a/b): ";
    string input1;
    getline(cin, input1);
    stringstream ss1(input1);

    char slash;
    ss1 >> x[0].numerator >> slash >> x[0].denominator;

    cout << "Enter the second fraction(c/d): ";
    string input2;
    getline(cin, input2);
    stringstream ss2(input2);
    ss2 >> x[1].numerator >> slash >> x[1].denominator;


    int numerator = x[0].numerator * x[1].denominator + x[0].denominator * x[1].numerator;
    int denominator = x[0].denominator * x[1].denominator;


    cout << "Sum = " << numerator << "/" << denominator << endl;

    return 0;
}
