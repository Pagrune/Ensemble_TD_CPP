#include "complex2D.h"

#include <iostream>
#include <cmath>

Complex2D::Complex2D() : _real(0.0), _imag(0.0) {
    // Default constructor
}

Complex2D::Complex2D(double real, double imag) : _real(real), _imag(imag) {
    // Parameterized constructor
}

Complex2D::Complex2D(const Complex2D& other) : _real(other._real), _imag(other._imag) {
    // Copy constructor
}

void Complex2D::setReal(double real) {
    _real = real;
}

void Complex2D::setImag(double imag) {
    _imag = imag;
}

double Complex2D::getReal() const {
    return _real;
}

double Complex2D::getImag() const {
    return _imag;
}

Complex2D Complex2D::operator+( Complex2D c2)  {
    return Complex2D(_real + c2._real, _imag + c2._imag);
}

Complex2D Complex2D::operator-( Complex2D c2)  {
    return Complex2D(_real - c2._real, _imag - c2._imag);
}

Complex2D Complex2D::operator*( Complex2D c2)  {
    double realPart = _real * c2._real - _imag * c2._imag;
    double imagPart = _real * c2._imag + _imag * c2._real;
    return Complex2D(realPart, imagPart);
}

Complex2D Complex2D::operator/( Complex2D c2)  {
    double denominator = c2._real * c2._real + c2._imag * c2._imag;
    double realPart = (_real * c2._real + _imag * c2._imag) / denominator;
    double imagPart = (_imag * c2._real - _real * c2._imag) / denominator;
    return Complex2D(realPart, imagPart);
}

double Complex2D::abs() const {
    return std::sqrt(_real * _real + _imag * _imag);
}

bool Complex2D::operator<( Complex2D c2)  {
    double mod1 = _real * _real + _imag * _imag;
    double mod2 = c2._real * c2._real + c2._imag * c2._imag;
    return mod1 < mod2;
}

bool Complex2D::operator>( Complex2D c2)  {
    double mod1 = _real * _real + _imag * _imag;
    double mod2 = c2._real * c2._real + c2._imag * c2._imag;
    return mod1 > mod2;
}



void Complex2D::print() const {
    std::cout << _real << " + " << _imag << "i" << std::endl;
}

int main(){
    Complex2D c1(2.0, 3.0);
    Complex2D c2(4.0, 5.0);
    Complex2D c3 = c1 + c2;
    Complex2D c4 = c1 - c2;
    Complex2D c5 = c1 * c2;
    Complex2D c6 = c1 / c2;
    double module = c1.abs();


    std::cout << "c1: ";
    c1.print();
    std::cout << "c2: ";
    c2.print();
    std::cout << "c3=(c1 + c2): ";
    c3.print();

    std::cout << "c4=(c1 - c2): ";
    c4.print();

    std::cout << "c5=(c1 * c2): ";
    c5.print();

    std::cout << "c6=(c1 / c2): ";
    c6.print();

    std::cout << "Valeur absolue of c1: " << module << std::endl;



    if(c1 < c2) {
        std::cout << "c1 < c2." << std::endl;
    } else {
        std::cout << "c1 > c2." << std::endl;
    }

        if(c1 > c2) {
            std::cout << "c1 > c2." << std::endl;
        } else {
            std::cout << "c1 < c2." << std::endl;
        }


 

    return 0;
}