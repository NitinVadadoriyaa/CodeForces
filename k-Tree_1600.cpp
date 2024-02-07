#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

//ctrl + space to run exsiting file.
int solve(int curr_sum,int &k,int &d,int &sum,bool peak,unordered_map<string, int> &dp) {
    if (curr_sum == sum) {
        return (peak) ? 1 : 0;
    }
    else if (curr_sum > sum)
    {
        return 0;
    }
    int ans = 0;
    string key = to_string(curr_sum) + "#" + to_string((int)peak);
    if (dp.find(key) != dp.end())
        return dp[key];

    for (int i = 1; i <= k; i++)
    {
        if (i >= d) {
            ans =( ans + solve(curr_sum + i, k, d, sum, true,dp)) % mod;
        } else {
            ans = (ans + solve(curr_sum + i, k, d, sum, peak, dp)) % mod;
        }
    }

    return dp[key] = ans;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int sum, k, d;
    unordered_map<string, int> dp;
    cin >> sum >> k >> d;
    cout << solve(0, k, d, sum, false,dp) << endl;
    return 0;
}