#include <iostream>
using namespace std;

class Bank;

class Customer
{
private:
    double balance;

public:
    Customer()
    {
        cout << "Customer's Balance: " << balance << endl;
    }
    Customer(double initialBalance) : balance(initialBalance) {}

    friend class Bank; 

    void withdrawMoney(Bank &bank, double amount);
};

class Bank
{
private:
    double totalBalance;

public:
    Bank(double initialTotalBalance) : totalBalance(initialTotalBalance) {}

    friend void Customer::withdrawMoney(Bank &bank, double amount);

    double getTotalBalance() const
    {
        return totalBalance;
    }
};

void Customer::withdrawMoney(Bank &bank, double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        bank.totalBalance -= amount;
        cout << "Withdrawal successful. New customer balance: " << balance << endl;
    }
    else
    {
        cout << "Insufficient balance to withdraw." << endl;
    }
}

int main()
{
    Bank bank(100000.0);   
    Customer customer(5000.0);

    customer.withdrawMoney(bank, 2000.0);

    cout << "Bank's Total Balance: " << bank.getTotalBalance() << endl;

    return 0;
}
