#include <iostream>

double plus(double a, double b) {
    return a + b;
}

double minus(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {

    double first_Number, last_Number;
    char opration;
    
    std::cout << "Enter Your First Number: ";
    std::cin >> first_Number;

    std::cout << "Enter Your Operation (+,-,×,÷): ";
    std::cin >> opration;

    std::cout << "Enter Your Second Number: ";
    std::cin >> last_Number;


    switch (opration) {
        case '+':
        std::cout << "Result: " << plus(first_Number, last_Number);
        std::cout << "\n";
        break;
        case '-':
        std::cout << "Result: " << minus(first_Number, last_Number);
        std::cout << "\n";
        break;
        case '×':
        std::cout << "Result: " << multiplication (first_Number, last_Number);
        std::cout << "\n";
        break;
        case '÷':
        std::cout << "Result: " << divide(first_Number, last_Number);
        std::cout << "\n";
        break;
    }


}
