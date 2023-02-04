#include <bits/stdc++.h>
#include <exception>

using namespace std;

class HandlesGone
{
public:
    HandlesGone();
};

class BadFileName : public HandlesGone
{
public:
    BadFileName();
};

// void fetch(char *name, char *&data)  //exception specifications (check again)
// throw (BadFileName, HandlesGone);

// void fetch(char *name, char *&data)
// {
//     cout<<"Error";
// }

int main()
{
    try
    {
        // Watch out for a bad file name
        // or no file handles available.
        string file_name = "";
        if (file_name == "Hello")
        {
            BadFileName e;
            throw e;
        };
    }
    catch (BadFileName &e) // derived class first  then base class will catch
    {
        // Handle BadFileName exceptions.
    }
    catch (HandlesGone &e) // exceptions are often declared as references so that polymorphic behavior is possible
    {
        throw; // rethrows the same exception
        // Handle HandlesGone exceptions.
    }
    catch (...) // ellipsis
    {
        // Handle exceptions not covered.
    }
    return 0;
}