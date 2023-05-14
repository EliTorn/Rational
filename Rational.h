
#ifndef RATIONAL_RATIONAL_H
#define RATIONAL_RATIONAL_H
#include <iostream>
using namespace std;
#include <cmath>

class Rational {
private:
int _numerator;
int _denominator;
public:
    void add();
    Rational(int numerator=1, int denominator=0);
    Rational(const Rational & rational);
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int numerator);
    void setDenominator(int denominator);
    void setRational(int numerator,int denominator);
    void printRational();
    void reducingFractures();
    void realNumber();
    void printMin(int  Rational[], int n);
};


#endif //RATIONAL_RATIONAL_H
