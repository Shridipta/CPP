#include <bits/stdc++.h>
using namespace std;

void insertionSort(char *A, int n) // sort an array of n characters
{
    for (int i = 1; i < n; i++) // insertion loop
    {
        char cur = A[i];                 // current character to insert
        int j = i - 1;                   // start at previous character
        while ((j >= 0) && (A[j] > cur)) // while A[j] is out of order
        {
            A[j + 1] = A[j]; // move A[j] right
            j--;             // decrement j
        }
        A[j + 1] = cur; // this is the proper place for cur
    }
}

void print(char a)
{
    cout << a << endl;
}

int main()
{
    char chars[] = {'B', 'C', 'D', 'A', 'E', 'H', 'G', 'F'};
    insertionSort(chars, 7);
    for_each(chars, chars + 7, print);
    return 0;
}