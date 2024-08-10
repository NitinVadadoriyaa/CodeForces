#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


//ctrl + space to run exsiting file.
ll dp[1000000 + 1];
ll sol(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    if (dp[n] != -1)
        return dp[n];

    ll ans = 0;
    for (int i = 1; i <= 6; i++)
    {
        if (i <= n) {
            ans = (ans + sol(n - i)) % mod;
        } else {
            break;
        }
    }

    return dp[n] = ans;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << sol(n) << endl;
    return 0;
}