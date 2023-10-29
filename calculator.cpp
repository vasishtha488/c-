
#include <iostream>

int main() {
    char op;
    double num1, num2;

    std::cout << " enter first number : ";
    std::cin >> num1;
    std::cout << " enter operator (+,-,*,/) : ";
    std::cin >> op;
    std::cout << " enter second number : ";
    std::cin >> num2;

    double result;
    switch (op) {
        case '+' :
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << " error: division by zero is not allowed." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << " error: invalid operator." << std::endl;
            return 1;
    }

    std::cout << " result: " << num1 << " " << op << " " << num2 << " = " << result << std::endl;

    return 0;
}