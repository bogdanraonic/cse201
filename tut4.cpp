#include <iostream>

class Complex {
  private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex() {this -> real = 0; this -> imaginary = 0;}

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary)
    {
        this -> real = real;
        this -> imaginary = imaginary;
    }

    ~Complex()
    {
        std::cout << "Destroying number " << this -> real << " + " << this -> imaginary << " * i" << std::endl;
    }
};

int main()
{
    Complex c1(1,2);
    Complex c2(0,0);
    Complex c3(3,0);

    return 0;
}
