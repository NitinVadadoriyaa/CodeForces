#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
ll check(vector<ll> &a,ll k) {
    ll d = 0;
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        ll dam = (a[i] + k - 1 >= a[i + 1]) ? (a[i + 1] - a[i]) : (k);
        d += dam;
    }

    return d + k;
}
int main() {
    //SPEED_UP
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
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
        ll h;
        cin >> h;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll l = 1, r = 1e18;
        ll ans = -1;
        while (l <= r)
        {
            ll k = (l + ((r - l) / (ll)2));
            ll d = check(a, k);
            if (d >= h) {
                ans = k;
                r = k - 1;
            } else {
                l = k + 1;
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}