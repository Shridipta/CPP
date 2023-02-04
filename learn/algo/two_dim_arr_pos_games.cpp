#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M[8][10]; // matrix with 8 rows and 10 columns
    const int N_DAYS = 7;
    const int N_HOURS = 24;
    int schedule[N_DAYS][N_HOURS];

    // Allocating storage for a matrix as an array of arrays.

    int m = 10, n = 10;
    int **N = new int *[n]; // allocate an array of row pointers
    for (int i = 0; i < n; i++)
        N[i] = new int[m]; // allocate the i-th row

    // Deallocating storage for a matrix as an array of arrays
    for (int i = 0; i < n; i++)
        delete[] M[i]; // delete the i-th row
    delete[] M;        // delete the array of row pointers

    // Using STL Vectors to Implement Matrices
    vector<int> a;
    vector<vector<int>> b;
    // vector<int>(m) ;   //vector c of m integers


    vector<vector<int>>
        M(n, vector<int>(m));
    // cout << M[i][j] << endl;
    return 0;
}