#include<iostream>
#include<ctime>
using namespace std;
int main() {
	clock_t start_time,end_time;
	start_time = clock();
	int i;
	// your process
    system(".\\learncpp.exe");

	// for(i=0;i<10000;++i)cout<<i;
	// cout<<endl;
	end_time = clock();
	cout<<"Time Taken"<<(end_time - start_time)/CLOCKS_PER_SEC<<endl;
	return 0;
}