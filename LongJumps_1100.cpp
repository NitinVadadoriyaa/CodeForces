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
        // cout << n << endl;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<int> dp(n + 1, 0);
        int maxi = 0;
        for (int i = n; i > 0; i--)
        {
            dp[i] = a[i];
           (a[i] + i <= n) ? (dp[i] += (dp[a[i] + i])) : 0;
            maxi = max(maxi, dp[i]);
            // cout << dp[i] << endl;
        }

        cout << maxi << endl;
        t--;
    }
    return 0;
}