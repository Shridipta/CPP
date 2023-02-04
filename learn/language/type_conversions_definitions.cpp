#include <bits/stdc++.h>
using namespace std;

class Account
{
public:
    Account(double b)
    {
        balance = b;
    }
    operator double()
    {
        return balance;
    }

private:
    double balance;
};

class Account1
{
public:
    Account1(double b)
    {
        balance = b;
    }

private:
    double balance;
};

int main()
{
    typedef unsigned long uint32;
    uint32 value32bit;

    typedef map<int, string> IntStringMap;
    IntStringMap m;

    
    // user-defined conversions
    Account account(100.0);
    double balance = account;

    // converting constructors
    Account1 account = 100.0;

    return 0;
}