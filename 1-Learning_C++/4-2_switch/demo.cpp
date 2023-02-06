#include <iostream>

using namespace std;

float operand_1, operand_2, result;
char operation;

int main() {
    cout << "Operand 1: " << endl;
    cin >> operand_1;
    cout << "Operand 2: " << endl;
    cin >> operand_2;
    cout << "Operation (+, -, *, /): " << endl;
    cin >> operation;

    switch (operation) {
    case '+':
        result = operand_1 + operand_2;
        break;
    case '-':
        result = operand_1 - operand_2;
        break;
    case '*':
        result = operand_1 * operand_2;
        break;
    case '/':
        result = operand_1 / operand_2;
        break;
    default:
        result = operand_1 + operand_2;
        break;
    }

    cout << "The result is: " << result << endl;
    return 0;
}