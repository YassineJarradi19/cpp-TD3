#include <iostream>

class ComplexNumber {
public:
    ComplexNumber(double real, double imaginary) : realPart(real), imaginaryPart(imaginary) {}

    ComplexNumber operator+(const ComplexNumber& numb) const {
        return ComplexNumber(realPart + numb.realPart, imaginaryPart + numb.imaginaryPart);
    }

    ComplexNumber operator-(const ComplexNumber& numb) const {
        return ComplexNumber(realPart - numb.realPart, imaginaryPart - numb.imaginaryPart);
    }

    void display() const {
        std::cout << realPart << " + " << imaginaryPart << "i" << std::endl;
    }

private:
    double realPart;
    double imaginaryPart;
};

int main() {
    double real1, imaginary1, real2, imaginary2;

    std::cout << "Enter the real part of the first complex number: ";
    std::cin >> real1;
    std::cout << "Enter the imaginary part of the first complex number: ";
    std::cin >> imaginary1;

    std::cout << "Enter the real part of the second complex number: ";
    std::cin >> real2;
    std::cout << "Enter the imaginary part of the second complex number: ";
    std::cin >> imaginary2;

    ComplexNumber number1(real1, imaginary1);
    ComplexNumber number2(real2, imaginary2);

    ComplexNumber addition = number1 + number2;
    ComplexNumber subtraction = number1 - number2;

    std::cout << "Addition: ";
    addition.display();
    std::cout << "Subtraction: ";
    subtraction.display();

    return 0;
}
