#include <iostream>
#include "Rational.h"
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    Rational rational;
    rational.add();
    rational.printRational();
    rational.reducingFractures();
    rational.printRational();


    return 0;
}
