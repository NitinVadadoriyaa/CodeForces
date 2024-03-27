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
        ll hc,dc;
        cin >> hc >> dc;
        ll hm, dm;
        cin >> hm >> dm;
        ll k, w, a;
        cin >> k >> w >> a;
        bool f = true;
        for (ll i = k; i >= 0; i--)
        {
            ll rc = ceil(((hm+0.0) / (w * i + dc)));
            ll rm = ceil((((hc + 0.0) + (a * (k - i))) / dm) );
            if (rc <= rm) {
                cout << "YES" << endl;
                f = false;
                break;
            }
        }
        if (f) {
            cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}