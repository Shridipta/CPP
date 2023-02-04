#include <iostream>
#include <unordered_set>
using namespace std;

enum
{
    HandleCount = 100
};

enum
{
    Size1 = 4,
    Size2 = 4
};

void f(int handles[])
{
    handles[0] = 0;
}
// for 2D or more array the dimension from 2nd dimension must be specified
void g(double matrix[][Size2])
{
    matrix[0][Size2 - 1] = 1.0;
}

// using pointer parameters
void f(int *handles)
{
    handles[0] = 0;
}
void g(double (*matrix)[Size2])
{
    matrix[0][Size2 - 1] = 1.0;
}

int main()
{

    int handles[HandleCount]; // single dimension array
    for (int i = 0; i < HandleCount; i++)
    {
        handles[i] = -1; //*(handles + i) = -1;
    }

    double matrix[Size1][Size2]; // multidimensional array

    for (int i = 0; i < Size1; i++)
        for (int j = 0; j < Size2; j++)
            matrix[i][j] = 0.0; // *(*(matrix + i) + j) = 0.0;

    enum SwitchState
    {
        On,
        Off
    };
    // Initializer lists for arrays
    SwitchState switches[] =
        {
            On, Off, On, Off};

    // Initializer lists for multidimensional arrays
    char tictactoe[3][3] =
        {
            {
                '_',
                '_',
                '_',
            },
            {
                '_',
                '_',
                '_',
            },
            {
                '_',
                '_',
                '_',
            }};

    // initialize an unordered_set of int type
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    // print the set
    cout << "Numbers are: ";
    for (int num : numbers)
    {
        cout << num << ", ";
    }

    return 0;
}