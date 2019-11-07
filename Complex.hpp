#pragma once
#include <iostream>

template <typename T> class Complex{
   public:

       Complex(T a, T b) { this->r = a; this->i = b; }
       ~Complex() {}


       Complex operator+ (const Complex& a) const { return Complex(r + a.r, i + a.i); }
       Complex operator- (const Complex& a) const { return Complex(r - a.r, i - a.i); }
       Complex operator* (const Complex& a) const { return Complex(r*a.r - i*a.i, r*a.i + i*a.r); }

       void print() {
           std::cout << r << " + " << i << "*i" << std::endl;
       }

    private:
        T r,i;
};
