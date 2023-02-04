#include <bits/stdc++.h>
using namespace std;

struct AccountInfo
{
    enum
    {
        NameInfo,
        BalanceInfo
    };
    int type;
    union
    {
        char name[20];
        double balance;
    };
};

union GFG
{
    int Geek1;
    char Geek2;
    float Geek3;
};

union Data
{
    int i;
    float f;
} data1, data2;

int main()
{
    AccountInfo info;
    info.type = AccountInfo::BalanceInfo;
    info.balance = 100.0;

    if (info.type == AccountInfo::BalanceInfo)
    {
        // Use the balance.
        info.balance++;
    }

    printf("Memory size occupied by data : %d\t%d", sizeof(data1), sizeof(data2));

    union GFG G1;

    G1.Geek1 = 34;
    // Printing values
    cout << "The first value at "
         << "the allocated memory : " << G1.Geek1 << endl;

    G1.Geek2 = 34;
    cout << "The next value stored "
         << "after removing the "
         << "previous value : " << G1.Geek2 << endl;

    G1.Geek3 = 34.34;
    cout << "The Final value value "
         << "at the same allocated "
         << "memory space : " << G1.Geek3 << endl;

    return 0;
}