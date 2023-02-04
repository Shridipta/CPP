#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{

    int i = 20;
    int *iptr = &i;                      // initialization and declaration
    cout << &i << "  " << iptr << "\n";  // pointer stored address and value address are same
    cout << &i << "  " << &iptr << "\n"; // pointer address and value address are different
    cout << i << "  " << *iptr << "\n";  // pointer value and value of address stored are same

    int *p; // initialization
    p = &i;

    int k = 50;                         // changing the value of the pointer
    *iptr = k;                          // This sets i to k;
    cout << &i << "  " << iptr << "\n"; // address stored does not change
    cout << i << "  " << *iptr << "\n"; // value of i changes through pointer

    int j;     // obtaining the value of a pointer
    j = *iptr; // This sets j to i.

    // int a;            //not possible
    // long *b = &a;

    // void pointers
    void *p2;
    p2 = &i;
    cout << "type is " << typeid(p2).name() << endl; // pointer datatype remains void (Pv)

    // null pointers
    int *p3 = 0;
    printf("Address of p3 is : %d", p3);
    printf("Value of p3 is : %d", *p3); // does not print anything

    // indirection
    int i;
    int *p = new int;
    *p = 5;
    i = *p;
    return 0;
}