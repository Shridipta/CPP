#include <bits/stdc++.h>
using namespace std;

void upperString(char *t, const char *s)
{
    for (; *s != '\0'; *(t++) = toupper(*(s++)))
        ;
    *(t++) = '\0';
}

int main()
{
    // delete keyword
    // https://www.geeksforgeeks.org/delete-in-c/

    // c-style cast
    void *p = new int;
    *p = 10;
    int *q = (int *)p;

    // volative keyword have different meaning for variables and methods


    //for loop
    // Prevent warnings in Visual C++.
    // #pragma warning(disable : 4786)
    typedef map<int, string> IntStringMap;
    IntStringMap m;
    char s[4];
    for (int i = 0; i < 10; i++)
    {
        s[0] = 'a' + i;
        s[1] = 'b' + i;
        s[2] = 'c' + i;
        s[3] = '\0';
        m.insert(IntStringMap::value_type(i,
                                          string(s)));
    }
    return 0;
}