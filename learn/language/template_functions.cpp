#include <bits/stdc++.h>
using namespace std;

template <class Type>
class Array
{
public:
    Array();
    bool insert(const Type
                    &element,
                int pos);

private:
    Type *bufferForElements;
};


class Account
{
public:
    double acc_no;
    Account(double a)
    {
        acc_no = a;
    }
}; // semicolon is must

template <class Type>
void xchg(Type &x, Type &y)
{
    Type t = x;
    x = y;
    y = t;
};

template <>
void xchg<string>(string &s, string &t) // explicit specialization
{
    s.swap(t);
};

// template <class Type>     //check
// bool insert(Array<Type> &a, const Type &element, int pos)
// {
//     return a.insert(element, pos);
// };

template <class Type, int n>
void sort(Array<Type> &a){

};

int main()
{
    int i = 10, j = 20;
    Account a(50.0), b(75.0);

    xchg(i, j);
    cout << i << j;

    xchg(a, b);

    string s1("abc"), s2("xyz");
    xchg<string>(s1, s2);
    cout << s1 << s2;

    Array<int> integerArray;
    // Sort only the first 10 values.
    sort<int, 10>(integerArray);

    return 0;
}