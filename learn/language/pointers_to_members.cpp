#include <bits/stdc++.h>
using namespace std;

int main()
{


    int X::*p = &X::data;
    X object;
    X *objptr = new X;
    int i = object.*p;
    int j = objptr->*p;

    return 0;
}