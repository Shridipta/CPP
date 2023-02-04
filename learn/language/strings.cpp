#include <bits/stdc++.h>
#include <string>

using namespace std;
int main()
{
    enum
    {
        NameLength = 81
    };
    char name[NameLength];
    wchar_t wide[NameLength];

    // all the char arrays contains a null terminator
    /*Functions that return a string’s length, such as strlen (from the C++ Standard
    Library), do not include a string’s null terminator in the length returned. */

    char empty[] = ""; // only contains a null pointer

    char name[] = "Margot";

    char s[] = "This string is "
               "on two lines.";

    wchar_t wide[] = L"Margot";
    return 0;
}