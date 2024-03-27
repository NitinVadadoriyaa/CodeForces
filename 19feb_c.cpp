#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
int dp[200001];
int solve(int n)
{
    if (n == 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    int d = 0;
    int num = n;
    while (num) {
        d += (num % 10);
        num /= 10;
    }

    return dp[n] = d + solve(n - 1); 
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    memset(dp, -1, sizeof(dp));
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        int res = solve(n);
        cout << res << endl;
        t--;
    }
    return 0;
}