#pragma once

class Complex {
  private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:

    Complex();
    Complex(double real, double imaginary);
    ~Complex();

    double getReal();
    double getImaginary();
    void setReal(double re);

    void setImaginary(double im);

    double magnitude();
    void normalize();
};
