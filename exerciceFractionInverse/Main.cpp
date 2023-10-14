#include <iostream>
#include "Fraction.hpp"

using namespace std;

int main() {
    Fraction a(4, 5);
    Fraction b(2);
    Fraction c;

    c = a * b;

    cout << a << " * " << b << " = " << c << endl;

    if (a == b) {
        cout << "a est égal à b." << endl;
    } else {
        cout << "a n'est pas égal à b." << endl;
    }

    return 0;
}
