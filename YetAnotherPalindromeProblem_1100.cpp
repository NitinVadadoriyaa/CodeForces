#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<vector<int>> dp(n + 1, vector<int>(n + 1,0));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool f = false;
        for (int i = 1; i <= n; i++)
        {                                  // rows
            for (int j = 1; j <= n; j++) { // colums
                if (a[n - i] == a[j-1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
                if (dp[i][j] >= 3) {
                    cout << "YES" << endl;
                    f = true;
                    break;
                }
            }
            if (f)
                break;
        }
        if (f==false)
            cout << "NO" << endl;
        t--;
    }
    return 0;
}