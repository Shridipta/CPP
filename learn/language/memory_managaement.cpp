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
    int *i = new int;
    double *x = new double(10.0);
    // Circle *c = new Circle;
    // Pt *p = new Pt(1.0, 2.0);

    // set a value at a perticular address
    int *y = (int *)0x61fe9c;
    *y = 2;
    cout << *y; // 2

    double *da = new double[5];
    // Circle *ca = new Circle[8];

    string name = "Hello";
    // Account *a = new(3,x) Account;
    char *c = new(nothrow) char[10];

    Account *a = new Account;
    delete a;

    // a->deposit(1000); //error

    Account *acc = new Account[10];
    delete[] acc;


    return 0;
}