#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

#include "Account.h"

// int main()
int main(int argc, char *argv[]) // 1st arg is the number of arg to be supplied in cmdline
{
    cout << argv[0];
    cout << argv[argc]; // 0

    Account account(0.0);
    char action;
    double amount;
    if (argc > 1)
        account.deposit(atof(argv[1]));
    while (true)
    {
        cout << "Balance is "
             << account.getBalance()
             << endl;
        cout << "Enter d, w, or q: ";
        cin >> action;
        switch (action)
        {
        case 'd':
            cout << "Enter deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 'w':
            cout << "Enter withdrawal: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 'q':
            exit(0);
        default:
            cout << "Bad command" << endl;
        }
    }
    return 0; //if no return 0 then return 0 is implicit
}