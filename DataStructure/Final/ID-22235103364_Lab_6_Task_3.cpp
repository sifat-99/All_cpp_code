#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 100;

void push(int arr[], int& top, int val) {
    if (top == MAX_SIZE) {
        cout << "Stack Overflow!" << endl;
        return;
    }
    arr[top] = val;
    top++;
}

int pop(int arr[], int& top) {
    if (top == 0) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    top--;
    return arr[top];
}

int evaluatePostfixExpression(const string& expression) {
    int operandStack[MAX_SIZE];
    int top = 0;

    for (size_t i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (isdigit(c)) {
            push(operandStack, top, c - '0');
        } else {
            int operand2 = pop(operandStack, top);
            int operand1 = pop(operandStack, top);

            switch (c) {
                case '+':
                    push(operandStack, top, operand1 + operand2);
                    break;
                case '-':
                    push(operandStack, top, operand1 - operand2);
                    break;
                case '*':
                    push(operandStack, top, operand1 * operand2);
                    break;
                case '/':
                    push(operandStack, top, operand1 / operand2);
                    break;
                default:
                    cout << "Invalid operator: " << c << endl;
                    return 0;
            }
        }
    }

    return operandStack[top - 1];
}

int main() {
    string expression;
    cout << "Enter the postfix expression: ";
    cin >> expression;

    int result = evaluatePostfixExpression(expression);
    cout << "Result: " << result << endl;

    return 0;
}
