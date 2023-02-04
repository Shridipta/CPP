#include <bits/stdc++.h>
using namespace std;
class Account;

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

template <class Type>
bool Array<Type>::insert(const Type
                             &element,
                         int pos)
{
}

template <class Type>
Array<Type>::Array()
{
    Type *bufferForElements = nullptr;
}

template <>
class Array<void *> // Array had to be a template
{
public:
    Array(int elmtSize);
    bool insert(const void *
                    element,
                int pos);

private:
    void *bufferForElements;
};

template <class Type, int s> //s is nontype parameter
class Array
{
public:
    bool insert(const Type
                    &element,
                int pos);

private:
    Type elements[s];
};

template<class T, class U = char> class A
{
public:
    T x;
    U y;
};

// template<class T = char, class U, class V = int> class A  // Error since all parameter following one default parameter should have a default value
// { 
//    // members of A
// };

int main()
{
    Array<int> counters;
    Array<Account> accounts;
    Array<void *> counters(sizeof(int));
    // Array<float, 50> temperatureValues;
    A<int, int> b;
    A<int> b; //automatically char
    return 0;
}