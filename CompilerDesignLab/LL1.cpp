#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;

void displayStack(char stack[], int top) {
    for (int i = 0; i <= top; i++)
        cout << stack[i];
    cout << "\t";
}

void displayInput(char input[], int pos) {
    for (int i = pos; i < strlen(input); i++)
        cout << input[i];
    cout << "\n";
}

int main() {
    char stack[MAX], input[MAX];
    int top = -1, pos = 0;
    cout << "Enter the input string (ending with $): ";   
    cin >> input;

    stack[++top] = '$'; // 0
    stack[++top] = 'A'; // 1

    cout << "Stack\tInput\n";
    cout << "-----\t-----\n";

    while (top >= 0) {
        displayStack(stack, top);
        displayInput(input, pos);

        char topSymbol = stack[top]; // 0 = $
        char currInput = input[pos]; // 4 = $
        if (topSymbol == currInput) {  // $ == $
            top--; // -1
            pos++; // 5
        }
        else if (topSymbol == 'A' && currInput == 'a') {
            top--;
            stack[++top] = 'a';
            stack[++top] = 'C';
            stack[++top] = 'a';
        }
        else if (topSymbol == 'C' && currInput == 'b') {
            top--;
            stack[++top] = 'C';
            stack[++top] = 'b';
        }
        else if (topSymbol == 'C' && (currInput == 'a' || currInput == '$')) {
            top--;
        }
        else {
            cout << "Error: Invalid input or grammar rule.\n";
            return 1;
        }
    }
    // 6    =    5
    if (pos == strlen(input))
        cout << "Parsing successful!\n";
    else
        cout << "Error: Input not fully consumed.\n";

    return 0;
}
