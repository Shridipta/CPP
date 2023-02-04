#include <bits/stdc++.h>
using namespace std;

//https://stackoverflow.com/questions/4324763/can-we-have-functions-inside-functions-in-c
//https://stackoverflow.com/questions/92396/why-cant-variables-be-declared-in-a-switch-statement?rq=1

// return
double square(double nm)
{
    return nm * nm;
}

void sayHello()
{
    cout << "Hello" << endl;
}

string GetLastError()
{
    return "ERROR_SUCCESS";
};

int main()
{
    int a = 10; // expression statement

    for (int i = 0; i < 10; i++)
        ; // null statement

    bool done = true;
    while (true)
    {
        // Start of a compound statement.
        if (!done)
        {
            // Another compound statement.
        }
        else
        {
            // Another compound statement.
        }
    };
    // iteration statements

    // while statement
    char ch1 = 'y';
    while (ch1 == 'y')
    {
        // Do something to be repeated.
        cout << "Do it again (y or n)? ";
        cin >> ch1;
    };

    // do statement
    char ch2;
    do
    {
        // Do something to be repeated.
        cout << "Do it again (y or n)? ";
        cin >> ch2;
    } while (ch2 == 'y');

// Prevent warnings in Visual C++.
#pragma warning(disable : 4786)
    typedef map<int, string> IntStringMap;
    IntStringMap m;
    char s[4];

    // for statement
    for (int i = 0; i < 10; i++)
    {
        s[0] = 'a' + i;
        s[1] = 'b' + i;
        s[2] = 'c' + i;
        s[3] = '\0';
        m.insert(IntStringMap::value_type(i,
                                          string(s)));
    };

    // selection statements

    // if statement
    int i = 50;
    if (i > 0 && i < 100)
    {
        // Do something when within range.
    }
    else
    {
        // Do something when not in range.
    };

    enum
    {
        type,
        keyDown,
        keyUp
    };

    switch (type)
    {
    case keyDown:
        // Do something for a key down.
        break;
    case keyUp:
        // Do something for a key up.
        break;
    default:
        // Handle anything not handled.
        cout<<"Invalid Choice";
    };

    // jump statements

    // break
    for (;;)
    {
        if (done)
            break;
        // When we're done, set done to true
        // so we break on the next iteration.
    };

    // continue
    bool skip = true;
    while (!done)
    {
        // If we need to skip the end portion
        // of the function, set skip to true.
        if (skip)
            continue;
        // This gets skipped when continuing.
    };

    // return statement

    // lambda statement
    auto print_message = [](std::string message)
    {
        std::cout << message << "\n";
    };
    for (int i = 0; i < 10; i++)
    {
        print_message("Hello!");
    }

    //lambda statement contd

    int j = 0;
    // Captures i by reference; increments it by one
    auto addOne = [&]()
    {
        j++;
    };
    while (j < 10)
    {
        addOne(); // Add 1 to i
        std::cout << j << "\n";
    }

    // goto statement

    if (GetLastError() != "ERROR_SUCCESS")
        goto handleError;
    // This code gets skipped on an error.
    handleError:
    cout << "Error occured";
    // Do something to handle error state.

    return 0;
}