#include <iostream>
int main() {
    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter the operation (+ or - or * or /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
        std::cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
        std::cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
        std::cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
             std::cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } else {
             std::cout << "Error: Division by 0 can't be done.\n";
            }
            break;
        default:
            std::cout << "Invalid operation !! \n"; }
   return 0;
}
