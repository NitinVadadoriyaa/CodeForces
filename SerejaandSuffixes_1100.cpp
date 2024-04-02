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
    
        int n , m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        unordered_map<int, bool> fre;
        int dp[n];
        fill(dp, dp + n, 0);
        for (int i = n - 1; i >= 0; i--) {
            fre[a[i]] = true;
            dp[i] = fre.size();
        }

        while(m) {
            int l;
            cin >> l;
            l--;
            cout << dp[l] << endl;
            m--;
        }
            return 0;
}