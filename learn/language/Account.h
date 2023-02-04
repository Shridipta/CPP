#ifndef ACCOUNT_H //to ensure the header is not processed a second time.
#define ACCOUNT_H
class Account
{
public:
    Account(double b);
    void deposit(double amt);
    void withdraw(double amt);
    double getBalance() const;

private:
    double balance;
};
#endif