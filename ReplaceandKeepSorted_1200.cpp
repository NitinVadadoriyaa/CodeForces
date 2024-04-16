#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    
        int n,q,k;
        cin >> n >> q >> k;
        vector<ll> a(n);
        vector<ll> pre(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
         for (int i = 0; i < n-1; i++)
        {
            if (i == 0) {
                pre[i] = a[i + 1] - 2;
            }
            else
            {
                pre[i] = a[i + 1] - a[i - 1] - 2;
                pre[i] += pre[i - 1];
            }
            // cout << pre[i] << " ";
        }
        if (n == 1) {
            pre[0] = k - 1;
        } else {
            pre[n - 1] = k - a[n - 2] - 1;
            pre[n - 1] += pre[n - 2];

        }
        // cout << pre[n - 1] << endl;
        while (q)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            ll ans = pre[r];
            if (l > 0)
                ans -= pre[l - 1];

            if (r == n - 1) {
               
            }else {
                ans -= (a[r + 1] - a[r - 1] - 2);
                ans += (k - a[r - 1] - 1);
            }
            if (l == 0) {
               
            } else {
                ans -= (a[l + 1] - a[l - 1] - 2);
                ans += (a[l + 1] - 2);
            }

            cout << ans << endl;
            q--;
        }

    return 0;
}