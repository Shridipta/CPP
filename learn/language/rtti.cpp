#include <bits/stdc++.h>
#include <typeinfo>

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
    Account c;
    const type_info &t = typeid(c);

    Account a;
    Account b;
    if (typeid(a) == typeid(b))
    {
        // a and b have the same type.
    }

    cout << typeid(c).name( ) << endl;

    return 0;
}