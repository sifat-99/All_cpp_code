#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;
int top = 0;
void push(char arr[], int &top, char val)
{
    if (top == MAX_SIZE)
    {
        cout << "Stack Overflow!" << endl;
        return;
    }
    arr[top] = val;
    top++;
}

char pop(char arr[], int &top)
{
    if (top == 0)
    {
        cout << "Stack Underflow!" << endl;
        return '\0';
    }
    top--;
    return arr[top];
}

void reverseString(string str)
{
    char arr[MAX_SIZE];

    for (size_t i = 0; i < str.length(); i++)
    {
        push(arr, top, str[i]);
    }

    while (top > 0)
    {
        cout << pop(arr, top);
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        reverseString(str);
    }

    return 0;
}