#include <iostream>

int main() {

    int first_Number, last_Number;
    char opration;
    
    std::cout << "Enter Your First Number: ";
    std::cin >> first_Number;

    std::cout << "Enter Your Operation (+,-,×,÷): ";
    std::cin >> opration;

    std::cout << "Enter Your Second Number: ";
    std::cin >> last_Number;


    switch (opration) {
        case '+':
        plus(first_Number, last_Number);
        break;
        case '-':
        minus(first_Number, last_Number);
        break;
        case '×':
        multiplication (first_Number, last_Number);
        break;
        case '÷':
        divide(first_Number, last_Number);
        break;
    }


}