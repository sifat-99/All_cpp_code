#include <iostream>
using namespace std;

class Bank
{
private:
    double totalBalance;

public:
    Bank()
    {
        totalBalance = 100000.00;
        cout << "Bank Previous Balance: " << totalBalance << endl;
    }
    friend class Customer;
};
class Customer
{
private:
    double balance;

public:
    double WithdrawBalance;
    Customer()
    {
        balance = 20000.00;
        cout << "Customer previous Balance: " << balance << endl;
    }
    double withdrawMoney(Bank &bank, double WithdrawBalance)
    {
        if (bank.totalBalance >= balance && WithdrawBalance <= balance && WithdrawBalance > 0)
        {
            balance = balance - WithdrawBalance;
            bank.totalBalance -= WithdrawBalance;
            cout << "Withdrawal successful, New Customer Balance: " << balance << endl;
            return bank.totalBalance;
        }
        else
        {
            if (WithdrawBalance <= 0 || WithdrawBalance > balance)
            {
                cout << "Enter Valid Amount between 1 to " << balance << endl;
            }
            cout << "Withdrawal unsuccessful" << endl;
            return bank.totalBalance;
        }
        return 0;
    }
};
int main()
{
    Bank bank;
    Customer customer;
    cout << "Enter Customer's Withdraw Amount: ";
    cin >> customer.WithdrawBalance;
    double WithdrawBalance = customer.WithdrawBalance;
    double bank_balance = customer.withdrawMoney(bank, WithdrawBalance);
    cout << "New Bank Balance: " << bank_balance << endl;
    return 0;
}