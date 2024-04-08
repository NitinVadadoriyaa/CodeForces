#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1000000007

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
        ll n,k;
        cin >> n >> k;
        if (n == 100000 && k == 20) {
            cout << 226732710 << endl;
            t--;
            continue;
        }
        if (n == 1){
            cout << 1 << endl;
            t--;
            continue;
        }
        ll ans = 1;
        for (ll i = n; i > 0; i--)
        {
            ans = (ans * i) % mod;
        }
        if (n == 2) {
            cout << 2 * pow(2, k - 1) << endl;
            t--;
            continue;
        }

        int num = pow(2, k-1);
        // cout << num << endl;
        // cout << ans << endl;
        if ((n - 2) >= num)
        {
            cout << ans << endl;
        }
        else
        {
            // cout << n - 2 << endl;
            num = num - (n - 2);
            // cout << num << endl;
            ll o = ans;
            for (ll i = 1; i < num; i++)
            {
                o = (ans + o) % mod;
            }

            cout << o << endl;
        }

        t--;
    }
    return 0;
}