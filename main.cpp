#include <iostream>

int main() {
    char op;
    float num1, num2;

    // Prompt the user to enter an operator
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    // Prompt the user to enter two operands
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the operation based on the operator entered
    switch(op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0)
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            else
                std::cout << "Error! Division by zero." << std::endl;
            break;
        default:
            std::cout << "Error! Operator is not correct." << std::endl;
            break;
    }

    return 0;
}
