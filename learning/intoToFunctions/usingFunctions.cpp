#include <iostream>
#include <cmath>
// you need to include cmath to do mathmatical equations in cpp
using namespace std;

int main() {

    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?";
    cin >> exponent;
    double power = pow(base, exponent);
    cout << power << endl;
}