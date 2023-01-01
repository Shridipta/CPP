#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    int* ptr;
    int var = 1;
    ptr = &var;

    cout<<"ptr = "<<&ptr;
    cout<<"var = "<<&var;
    
    auto a = v.begin();
    cout<<" ";

    return 0;
}