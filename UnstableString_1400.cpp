/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    while (t)
    {
    int n;
    ll ans = 0;
    string s;
        cin >> s;
        n = s.size();
        vector<vector<ll>> dp(n + 1, vector<ll>(2, (ll)0));

        for (int i = 1; i <= n; i++)
        {
            if (s[i-1] == '0') {
                dp[i][0] = 1 + dp[i - 1][1];
                dp[i][1] = 0;
            }
            else if (s[i - 1] == '1')
            {
                dp[i][1] = 1 + dp[i - 1][0];
                dp[i][0] = 0;
            }
            else
            {
                dp[i][1] = 1 + dp[i - 1][0];
                dp[i][0] = 1 + dp[i - 1][1];
            }
            ans += max(dp[i][0], dp[i][1]);
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}