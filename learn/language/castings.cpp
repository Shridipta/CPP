#include <bits/stdc++.h>
using namespace std;

class Account
{
public:
    string name;
    void deposit(double amt);
    double getBalance() const;
    virtual void withdraw(double amt)
    {
        balance -= amt;
    }
    Account &operatornew(const Account &a)
    {
        // balance = b;
        // this->name = name;
        return *this;
    }

protected:
    double balance;
};

int main()
{
    //C-Style Casts
    void *v = new Account;
    Account *a = (Account *)v;
    return 0;
}