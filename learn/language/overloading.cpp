#include <bits/stdc++.h>
using namespace std;

char *min(char *s, char *t)
{
    return (strcmp(s, t) < 0) ? s : t;
};
float min(float x, float y)
{
    return (x < y) ? x : y;
};

class Account
{
public:
    Account(double b)
    {
        balance = b;
    }
    // operator overloading
    Account &operator+=(double b)
    {
        balance += b;
        return *this;
    }
    // operator overloading
    Account &operator+=(const Account &a)
    {
        balance += a.balance;
        return *this;
    };

    // ostream &operator<<(ostream &os, const Account &a)  check
    // {
    //     return os << a.balance;
    // }

    // istream &operator>>(ostream &is,  (check)
    //                     Account &a)
    // {
    //     return is >> a.balance;
    // }

    // overloaded assignment operator is not inherited by derived classes
    friend ostream &operator<<(ostream &os, const Account &a);

private:
    double balance;
};

ostream &operator<<(ostream &os, const Account &a)
/*not a member of any class so 1st parameter
will work as leftside here and
2nd parameter will work as right side*/
{
    os << (a.balance);
    // return *this;
}

int main()
{
    // char *s = min("abc", "xyz"); //wrong
    // char s = min("abc", "xyz"); //wrong
    char s = min('d', 'f');
    float f = min(4.56F, 1.23F);
    cout << s << endl;

    Account a(50.0);
    Account b(75.0);
    a += b; // a now contains 125.0.
    // or a.operator+=(b)
    cout << a << endl;
    a += 100.0; // a now contains 225.0.
    cout << b << endl;
    return 0;
}