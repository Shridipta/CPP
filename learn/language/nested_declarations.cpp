#include <iostream>
using namespace std;

class Account
{
public:

    enum Status //cannot be modified
    {
        Premier,
        Valued,
        Standard
    };
    enum //cannot be modified
    {
        LargePIN = 8,
        SmallPIN = 4
    };

    
    Status s;
    int minPIN;
    
    void setStatus(Status s);
    void setMinPIN(int n);
};

void Account::setStatus(Status s)
{
    this->s = s;
}

void Account::setMinPIN(int n)
{
    minPIN = n;
}

int main()
{
    Account *p = new Account;


    p->setMinPIN(Account::LargePIN);
    p->setStatus(Account::Status::Valued);
}
