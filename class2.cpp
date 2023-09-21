#include <iostream>
using namespace std;
class bankAccount
{
public:
    int balance = 50000;
    friend class ATM;
};

class ATM
{
public:
    bankAccount o;
    int remain;
    int withdraw(int amount)
    {
        if (o.balance >= amount)
        {
            remain = o.balance - amount;
            return remain;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    int amount;
    bankAccount object;
    ATM ob;
    cin >> amount;
    int result = ob.withdraw(amount);
    cout << result;
}