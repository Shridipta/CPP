// https://www.geeksforgeeks.org/copy-constructor-in-cpp/

#include <bits/stdc++.h>
using namespace std;

class Account
{
private:
    int balance;
};

class Account2
{
public:
    string name;

    // Parameterized Constructor
    Account2(double b, string name);
    // Copy Constructor
    Account2(const Account2 &a);
    // Explicit Constructor
    explicit Account2(double b); // only one variable for explicit

    void getDataMembers()
    {
        cout << "Name = " << name << endl;
        cout << "Balance = " << balance;
    }

private:
    int balance;
};

// Parameterized Constructor
Account2::Account2(double b, string name)
{
    this->name = name;
    balance = b;
}

// Copy Constructor
Account2::Account2(const Account2 &a)
{
    name = a.name;
    balance = a.balance;
}

Account2::Account2(double b)
{
    balance = b;
}

class Account3
{
public:
    //Member Initialization
    Account3(double b) : balance(b),
                        minBalance(25.0)
    {
    }

private:
    double balance;
    const double minBalance;
};

int main()
{
    // Default constructor
    Account account;
    Account *p = new Account;

    Account2 acc2(100.0, "Hello"); // Parameterized Constructor called here
    Account2 acc3 = acc2;          // Copy Constructor called here
    acc3.getDataMembers();
    Account2 acc4 = (Account2)100.0; //Explicit Constructor called here
    acc4.getDataMembers();
    Account3 acc5(100.0); // Member Initialization called here
    return 0;
}
