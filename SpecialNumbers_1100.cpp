#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007

//ctrl + space to run exsiting file.
ll p(ll num,int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return num;
    ll temp = num;
    for (int i = 2; i <= n; i++)
    {
        temp = (temp * num) % MOD;
        // if (n == 4) cout << temp << endl;
        
    }
    return temp;
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
        int n,k;
        cin >> n >> k;
        // vector<ll> a(k+1);
        // int i = 2;
        // int j = 1;
        // a[0] = 0;
        // a[1] = 1;
        // ll num = n;
        // while (i <= k)
        // {
        //     for (int p = 0; p <= j; p++) {
        //         a[i++] = (num + a[p]) % MOD;
        //         if (i > k)
        //             break;
        //     }
        //     j = i - 1;
        //     // cout << j << endl;
        //     num = (num * n) % MOD;
        // }
        // cout << a[k] << endl;
        bitset<32> b(k);
        ll ans = 0;
        ll temp;
        int ind;
        ll num = n;
        for (int i = 0; i < 32; i++)
        {
            if (b.test(i)) {
                // cout << i << endl;
                temp = p(n, i);
                // cout << i << " " << temp << endl;
                ans = (ans + temp) % MOD;
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}