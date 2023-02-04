#include <bits/stdc++.h>
using namespace std;

class Account
{
public:
    string name;

    // static has to be defined before using
    static int withdraws;
    const int acc_no = 001;

    // Account(double b);   // it should have a definition before creating an object
    Account(double balance)
    {
        // const variables must be initialized in here
        this->balance = balance;
    }

    void deposit(double amt) // inline function (implicitly)
    {
        deposits++;
    }

    static int getDeposits() //accessing static variable so the method has to be static
    {
        return deposits;
    }

    void withdraw(double amt);
    double getBalance() const;  // can only be invoked using the objects created using const
    //const functions can modify 'mutable' data members or call non const member functions
    Account &operator=(const Account &a);

private:
    // declaring data members
    double balance;
    static int deposits;
    static const double minBalance;
};

// initializations for balance and definitions for getBalance not required as we are not working with them
int Account::withdraws = 0;
int Account::deposits = 0;
const double Account::minBalance = 0;

void Account::withdraw(double amt) // not inline function
{
    deposits--;
}

// static int Account::getDeposits( ) //cannot be defined here as there are no storage class
// {
// return deposits;
// }

// while operator overloading this pointer specify explicitly
Account &Account::operator=(const Account
                                &a)
{
    // Don't assign an account to itself.
    if (this != &a)
    {
        // Copy each member, as necessary.
    }
    // Returning a reference to an Account
    // makes chained assignments possible.
    return *this;
}

// Account::withdraws = 1; // requires a storage class
// int Account::deposits = 1; //again cannot be defined
// const double Account::minBalance = 1;//again cannot be defined

int main()
{
    // undefined reference
    /*If the class functions or any other definitions below main
    declarations of those may be done above the main*/
    // https://www.softwaretestinghelp.com/cpp-errors/#:~:text=An%20%E2%80%9CUndefined%20Reference%E2%80%9D%20error%20occurs,linked%20object%20files%20and%20libraries.

    // Declaring Objects
    Account account(100.0);
    Account::withdraws = 1; // main() is the storage class
    // Account::deposits = 0;  //first time initialization outside class but it is private so not accessable (use getters and setters)
    Account::withdraws = 1; // first time initialization outside class but can be changed as it is public
    int total = Account::getDeposits( );

    // Acessing Members
    account.name = "Hello";
    account.deposit(1000);
    account.withdraws = 1;
    // account.acc_no = 10; //not a mofiable lvalue

    // Using pointers
    Account *accptr = &account;
    accptr->name = "World";
    accptr->deposit(1000);

    return 0;
};
