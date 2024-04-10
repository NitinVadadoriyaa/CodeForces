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
    int t;
    cin >> t;
    while (t) {
        ll n,k;
        cin >> n >> k;
        ll l = 1, r = 1e10;
        ll res;
        while (l <= r)
        {
            ll ans = (l + (r - l) / 2);
            // cout << l << " " << r << endl;
            ll divisible = ans / n;
            if (ans - divisible == k) {
                   while(ans) {
                    //    cout << ans << " jfj" << endl;/
                       if ((ans % n) != 0)
                       {
                           res = ans;
                           break;
                       }
                        ans--;
                   }
                   break;
                }
            else if (ans - divisible > k)
            {
                r = ans - 1;
            }
            else
            {
                l = ans + 1;
            }
        }
        cout << res << endl;
        t--;
    }
    return 0;
}