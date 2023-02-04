#include <bits/stdc++.h>
using namespace std;

int HexToDec(string n) { return stoi(n, 0, 16); }

std::string convert_int(int* n)
{
   std::stringstream ss;
   ss << n;
   return ss.str();
}

int main()
{

    int i = 20;
    int *iptr = &i; //initialization and declaration
    cout<<iptr++;
    cout<<iptr<<"  "<<iptr+2<<" " <<iptr+4<<" "<<"\n"; // iptr is treated as an array of type T
    cout<<HexToDec(convert_int(iptr))<<"  "<<HexToDec(convert_int(iptr+1))<<" " <<HexToDec(convert_int(iptr+2))<<" "<<"\n"; // iptr is treated as an array of type T
    // eachaz address differs by 4 since size of int is 4


    return 0;
}