#include <bits/stdc++.h>
using namespace std;
void facto(int number)
{
    long long int factorial = 1;
    if (number < 0)
    {
        cout << "Dose not exists";
    }
    else
    {
        for (int i = 1; i <= number; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << number << " is " << factorial << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    facto(n);
}