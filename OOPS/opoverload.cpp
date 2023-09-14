#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;

    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    void print(){
        cout << "Real " <<real<<endl;
        cout<<"Imaginary "<<imag<<endl;
    }
};

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.0, 4.0);
    Complex c = a + b; 
    c.print();
    
    // Calls the overloaded + operator
    return 0;
}
