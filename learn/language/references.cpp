#include <bits/stdc++.h>
using namespace std;

std::string convert_int(int n)
{
   std::stringstream ss;
   ss << n;
   return ss.str();
}

void xchg(int &x, int &y)
{
int t = x;
x = y;
y = t;
}

int main()
{

    int i = 20, j = 30;
    int &r = i; //initialization and declaration
    cout<<"r =" + r++<<endl;
    xchg(i, j);
    cout<<"Value of i "<<i<< " Value of j "<<j;
    return 0;
}