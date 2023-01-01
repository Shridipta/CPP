#include <bits/stdc++.h>
 
using namespace std;
int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    long double n, m, a;
    cin >> n >> m >> a;
 
    cout << fixed << (long long)(ceil(n/a) * ceil(m/a)) << '\n';
 
    return 0;
}
