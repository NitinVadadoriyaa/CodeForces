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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }


        ll ans = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (i+1 < n && a[0] > a[1]) {
                    ans += abs(a[0] - a[1]);
                    a[0] = a[1];
                }
            } else if (i == n-1) {
                if (i-1 >= 0 && a[i] > a[i - 1]) {
                     ans += abs(a[i] - a[i - 1]);
                    a[i] = a[i - 1];
                }
            } else {
                if (a[i-1] < a[i] && a[i] > a[i+1]) {
                    int maxi = max(a[i - 1], a[i + 1]);
                    ans += abs(a[i] - maxi);
                    a[i] = maxi;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            // cout << a[i] << " ";
            if (i == 0)
            {
                ans += a[i];
            }
            else
            {
                ans += abs(a[i - 1] - a[i]);
            }
        }
        if (n > 1) ans += a[n - 1];
        cout << ans << endl;
        t--;
    }
    return 0;
}