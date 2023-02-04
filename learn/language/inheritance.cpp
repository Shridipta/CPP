#include <bits/stdc++.h>
using namespace std;

class Account
{
public:
    Account(double b);
    void deposit(double amt);
    double getBalance() const;
    virtual void withdraw(double amt)
    {
        balance -= amt;
    }

protected:
    double balance;
};

Account::Account(double b)
{
    balance = b;
}

void Account::deposit(double amt)
{
    balance += amt;
}

class BankAccount : public Account
{
public:
    BankAccount(double r);
    void addInterest();
    void chargeFee(double c);
    virtual void withdraw(double amt)
    {
        if (balance - amt < 0.0)
        {
            // Do nothing.
            cout << "No Balance";
        }
        else
        {
            // Balance OK.
            balance -= amt;
        }
    }

private:
    double interestRate;
};

BankAccount::BankAccount(double r) : Account(0.0),
                                     interestRate(r) // base class initializers
{
}

void BankAccount::addInterest()
{
    int i = balance * interestRate / 100.0;
    balance += i;
}

// double  BankAccount::getBalance() const {}  // not allowed
double Account::getBalance() const
{
    return balance;
}

int main()
{
    BankAccount bankAccount(2.25);
    bankAccount;
    bankAccount.deposit(50.0);
    bankAccount.addInterest();
    cout << "Balance = " << bankAccount.getBalance();

    BankAccount bankAccount(2.25); 
    Account *aptr = &bankAccount;
    aptr->withdraw(50.0); //Calls the withdraw method of BankAccount
    return 0;
}