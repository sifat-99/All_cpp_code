#include <iostream>
using namespace std;
class Reverse
{
public:
    int getTime;
    friend Reverse getInput(Reverse object);
    friend void doReversed(Reverse object);
};

Reverse getInput(Reverse object)
{
    cin >> object.getTime;
    return object;
}
void doReversed(Reverse obj)
{
    int number = obj.getTime;
    int reversed_number = 0, remainder;
    while (number != 0)
    {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number = number / 10;
    }
    cout << reversed_number;
}

int main()
{
    Reverse object, output;
    output = getInput(object);
    doReversed(output);
}