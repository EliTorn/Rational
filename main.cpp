#include <iostream>
#include "Rational.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Rational rational(1, 4);
    rational.realNumber();
    Rational r2(3, 4);
    Rational arr[] = {rational, r2};
    cout << "=============" << endl;
    double min = r2.min(arr, 2);
    cout << "The min is :" << min << endl;
    rational.add();
    rational.printRational();
    rational.reducingFractures();
    rational.printRational();


    return 0;
}
