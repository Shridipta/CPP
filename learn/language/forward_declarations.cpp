#include <iostream>
using namespace std;

class Account;
class Bank
{

private:
    Account *accounts;
};
class Account
{

private:
    Bank *bank;
};

int main()
{
    return 0;
}
