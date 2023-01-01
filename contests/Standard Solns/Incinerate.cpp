//By * Um_nik, contest: Codeforces Round #840 (Div. 2) and Enigma 2022 - Cybros LNMIIT, problem: (B) Incinerate
//https://codeforces.com/contest/1763/submission/185962831
/*Note by Shri: First the number of test cases are taken 
 Here the output is printed after each input case not after all the input test cases given 
like this:
3
6 7
18 5 13 9 10 1
2 7 2 1 2 6
YES
3 4
5 5 5
4 4 4
NO
3 2
2 1 3
1 1 1
YES
*/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
using namespace std;

#ifdef LOCAL
	#define eprintf(...) {fprintf(stderr, __VA_ARGS__);fflush(stderr);}
#else
	#define eprintf(...) 42
#endif

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template<typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
	return (ull)rng() % B;
}

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

clock_t startTime;
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

const int INF = (int)1e9 + 77;
const int N = 500500;
pii a[N];
int sufMin[N];
int n, k;

void solve() {
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i].first);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i].second);
	sort(a, a + n);
	sufMin[n] = INF;
	for (int i = n - 1; i >= 0; i--)
		sufMin[i] = min(sufMin[i + 1], a[i].second);
	int d = 0;
	int p = 0;
	while(k > 0) {
		d += k;
		while(p < n && a[p].first <= d) p++;
		if (p == n) {
			printf("YES\n");
			return;
		}
		k -= sufMin[p];
	}
	printf("NO\n");
}

int main()
{
	startTime = clock();
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	scanf("%d", &t);
	while(t--) solve();

	return 0;
}



/*
Time: 0 ms, memory: 5880 KB
Verdict: OK
Input
3
6 7
18 5 13 9 10 1
2 7 2 1 2 6
3 4
5 5 5
4 4 4
3 2
2 1 3
1 1 1
Participant's output
YES
NO
YES
Jury's answer
YES
NO
YES
Checker comment
ok 3 token(s): yes count is 2, no count is 1
*/