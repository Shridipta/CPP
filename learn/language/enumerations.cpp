#include <bits/stdc++.h>
using namespace std;

// https://stackoverflow.com/questions/261963/how-can-i-iterate-over-an-enum
// https://stackoverflow.com/questions/3475152/why-cant-i-increment-a-variable-of-an-enumerated-type

int main()
{
    enum SpectrumColor
    {
        Red,
        Orange,
        Yellow,
        Green,
        Blue,
        Indigo,
        Violet
    };

    // for (SpectrumColor s = Red; s <= Violet; s++)    //does not work will need to static cast it like: static_cast<SpectrumColor>(i)
    // {
    //     // Longest wavelength to shortest.
    // };

    for (int s = Red; s <= Violet; s++)
    {
        // Longest wavelength to shortest.
    };

    enum Foo
    {
        One,
        Two,
        Three,
        Last
    };

    for (int fooInt = One; fooInt != Last; fooInt++)
    {
        Foo foo = static_cast<Foo>(fooInt);
        // ...
    }

    enum
    {
        ASCII_NUL,     // 0
        ASCII_SOH,     // 1
        ASCII_STX,     // 2
        ASCII_A = 65,  // 65
        ASCII_B,       // 66
        BufferSize = 8 // 8
    };
    char buffer[BufferSize];

    enum Foo
    {
        One = 1,
        Two = 9,
        Three = 4,
        Last
    };
    
    Foo foo;
    switch (foo)
    {
    case One:
        // ..
        break;
    case Two: // intentional fall-through
    case Three:
        // ..
        break;
    default:
        assert(!"Invalid Foo enum value");
        break;
    }

    return 0;
}