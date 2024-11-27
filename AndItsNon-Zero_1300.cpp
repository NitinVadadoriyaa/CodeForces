#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


//ctrl + space to run exsiting file.
void preCal(vector<vector<int>> &dp) {
    for (int i = 1; i <= 200000; i++) {
            for (int j = 0; j < 32; j++) {
                if ((1 << j) & i) {
                    dp[i][j] = dp[i-1][j] + 1;
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    vector<vector<int>> dp(200002, vector<int>(32, 0));
   preCal(dp);
    while (t)
    {
        int l, r;
        cin >> l >> r;
        
        int ans = r - l;
        for (int i = 0; i < 32; i++)
        {
            // cout << (dp[r][i] - dp[l - 1][i]) << endl;
            ans = min(ans, (r - l + 1) - (dp[r][i] - dp[l - 1][i]));
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}