#include <iostream>
#include <algorithm>
using namespace std;

bool isHello(string input)
{
    string toFind = "hello";
    size_t index = 0;
    for (size_t i = 0; i < input.length(); ++i)
    {
        input[i] = tolower(input[i]);
    }
    for (size_t i = 0; i < toFind.length(); ++i)
    {
        char ch = toFind[i];
        index = input.find(ch, index);
        if (index == string::npos)
        {
            return false;
        }
        index++;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin>>input;
    if (isHello(input)) {
        cout << "Yes, It contains Hello" << endl; 
    } else {
        cout << "No, it does not contain hello" << endl;
    }

    return 0;
}
