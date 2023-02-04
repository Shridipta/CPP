#include <bits/stdc++.h>
#include <cwchar>
#include <climits> //contains the range of values
#include <cfloat>

using namespace std;

void sayHello()
{
    cout << "Hello" << endl;
}

int main()
{
    bool flag;
    if (flag)
    {
        // Do something when the flag is true.
    }
    flag = true;
    flag = false;
    flag = 1; // true
    flag = 0; // false

    char c1 = 'a';
    cout << "Letter a: " << c1 << endl;

    wchar_t c2 = 'a';
    cout << "Letter a: " << c2 << endl;

    /*If neither signed nor
unsigned is specified, characters are usually signed by default,
but this is left up to the compiler. */
    signed char small = -128;
    unsigned char flagsch = 0x7f;

    char ch1 = 'A';
    wchar_t ch2 = L'A'; // Character literal

    short sval = 32767;
    int ival = 2147483647;
    long lval = 0x7fffffff;

    signed short total;
    unsigned short flagsshort = 0xf0f0;

    int a = 12;
    a = -5;
    int oct = 012;
    oct = 0337;
    int hex = 0x2a;
    hex = 0xffff;
    long l = 256L;
    l = 0x7fL;

    unsigned int u = 0x80U;
    unsigned long ul = 0xffffUL;

    float fval1 = 8.00275F;
    float fval2 = -3.4e+38F;
    double dval1 = 0.4567;
    double dval2 = 1.71e-25;
    double dval3 = 1.7e+308;
    long double ldval = 1.7e+308L; // size of a double is less than or equal to the size of a long double

    int i = 200;
    void *p = &i;

    return 0;
}