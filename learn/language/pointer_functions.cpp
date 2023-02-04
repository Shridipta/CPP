#include <bits/stdc++.h>
using namespace std;

void addOne(int &x)
{
x += 1;
}

void (*inc)(int &x) = addOne;

//same as above one
// void (*inc)(int &x) = &addOne; 

int main()
{

    int a = 10;
    inc(a); // This adds 1 to a. (pass by reference)

    // (*inc)(a); //same as above

    printf("Value of a is : %d", a);


    return 0;
}