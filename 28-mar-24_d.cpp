#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
bool solve(int n,unordered_map<int, bool> &dp) {
    if (n == 1 || n == 10 || n == 11)
        return dp[n] = true;
    if (n == 0)
        return dp[n] = true;

        if (dp.find(n) != dp.end())
            return dp[n];
    bool f = true;
    int temp = n;
    while (temp) {
        if ((temp % 10) == 0 || (temp % 10) == 1) {
        } else {
            f = false;
            break;
        }
        temp = temp / 10;
    }
    if (f)
    return dp[n] = true;



    for (int i = 2; i <= sqrt(n); i++)
    {
        if ((n % i == 0) && solve(i,dp)) {
            if (solve(n / i,dp))
                return dp[n] = true;
        }
    }

    return dp[n] = false;
}
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
        unordered_map<int, bool> dp;
        bool ans = solve(n, dp);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
    return 0;
}