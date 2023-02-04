#include <bits/stdc++.h>
#include <iostream>
#include "Account.h"

#line 100
#line 100 "NewName.cpp"

using namespace std;

#define BUFFER_SIZE2 // simply defines

#define BUFFER_SIZE 80
char buffer[BUFFER_SIZE];

// Multi-line Macro definition
#define ELE 1, \
            2, \
            3
int arr[] = {ELE};

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

#undef LOGGING_ENABLED // undefines

#ifdef LOGGING_ENABLED
#error Logging should not be enabled
#endif

#ifdef LOGGING_ENABLED
#pragma message("Logging enabled")
#endif

int main()
{
#ifdef LOGGING_ENABLED
    cout << "Logging is enabled" << endl;
#else
    cout << "Logging is disabled" << endl;
#endif

#if (LOGGING_LEVEL == LOGGING_MIN && \
     LOGGING_FLAG)
    cout << "Logging is minimal" << endl;
#elif (LOGGING_LEVEL == LOGGING_MAX && \
       LOGGING_FLAG)
    cout << "Logging is maximum" << endl;
#elif LOGGING_FLAG
    cout << "Logging is standard" << endl;
#endif

    int x = 5, y = 10, z;
    z = MIN(x, y); // This sets z to 5.
    return 0;
}