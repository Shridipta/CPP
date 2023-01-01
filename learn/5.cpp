#include <iostream>
using namespace std;
int main()
{
    int i = 20;
    int *j;
    printf("j = ", *j);
    j = &i;
    *j = 10;
    cout<<j;
    cout<<*j<<endl;
    j = &i;
    cout<<i<<endl;
    cout<<j<<endl;
    int k = 1, l = 1, m = 1;
    cout<<&k<<" "<<&l<<" "<<&m;;
    int &n = i;
    printf("\n%d ", n);
}