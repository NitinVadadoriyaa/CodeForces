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
   
    bool dp[100];
    int t;
    cin >> t;
    while (t) {
        memset(dp, false, sizeof(dp));
        dp[0] = true;
        int n, d;
        cin >> n >> d;
        int mx = d * 10;
        for (int i = 0; i * 10 + d <= mx; i++) {
            for (int j = 0; i * 10 + d + j <= mx; j++) {
                dp[i * 10 + d + j] |= dp[j];
            }
        }
            
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            
            if (num >= mx || dp[num])
            {
                cout << "YES" << endl;
            }
            else
            {

            cout << "NO" << endl;
            }
        }

            t--;
    }
    return 0;
}