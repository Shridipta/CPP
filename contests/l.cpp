#include <iostream>
#include <vector>
#include <cmath>
#include <array>

using namespace std;
const int INF = 1e9;

inline int min(int a, int b) {
    if (a < b) return a;
    return b;
}

inline int max(int a, int b) {
    if (a > b) return a;
    return b;
}

inline void solve1() {
    int n, k, cnt = 0;
    cin >> n >> k;
    vector <vector <int>> a(n, vector <int>(n)), pref(n + 1, vector <int>(n + 1));
    vector <array <int, 4>> all(n * n, { INF, -INF, INF, -INF });
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j]; --a[i][j];
            all[a[i][j]][0] = min(all[a[i][j]][0], i);
            all[a[i][j]][1] = max(all[a[i][j]][1], i);
            all[a[i][j]][2] = min(all[a[i][j]][2], j);
            all[a[i][j]][3] = max(all[a[i][j]][3], j);
        }
    }
    for (auto& i : all) {
        if (i[0] != INF) ++cnt;
    }
    if (cnt <= k) {
        cout << k - cnt;
        return;
    }
    for (int len = 1; len <= n; ++len) {
        for (auto& i : all) {
            if (i[0] == INF) continue;
            int mn_x = i[0], mx_x = i[1], mn_y = i[2], mx_y = i[3];
            mx_x = max(0, mx_x - len + 1);
            mx_y = max(0, mx_y - len + 1);
            mn_x = min(mn_x, n - len);
            mn_y = min(mn_y, n - len);
            if (mx_x <= mn_x && mx_y <= mn_y) {
                ++pref[mx_x][mx_y];
                --pref[mx_x][mn_y + 1];
                --pref[mn_x + 1][mx_y];
                ++pref[mn_x + 1][mn_y + 1];
            }
        }
        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < n; ++y) {
                if (x == 0 && y == 0) continue;
                else if (x == 0) pref[x][y] += pref[x][y - 1];
                else if (y == 0) pref[x][y] += pref[x - 1][y];
                else pref[x][y] += pref[x - 1][y] + pref[x][y - 1] - pref[x - 1][y - 1];
            }
        }
        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < n; ++y) {
                if (cnt - pref[x][y] == k || cnt - pref[x][y] + 1 == k) {
                    cout << 1;
                    return;
                }
            }
        }
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= n; ++j) {
                pref[i][j] = 0;
            }
        }
    }
    cout << 2;
}

int main() {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    if (1) {
        int t = 1;
        //   cin >> t;
        while (t--) {
            solve1();
        }
    }

    return 0;
}