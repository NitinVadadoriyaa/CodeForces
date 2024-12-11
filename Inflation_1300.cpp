/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

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
        int n;
        cin >> n;
        ll k;
        cin >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll sum = accumulate(a.begin(), a.end(), (ll)0);
        // cout << sum << endl;
        ll extra = 0;
        double kk = k / 100.0;
        // cout << kk << endl;
        double com = 0.000000000001;
        // cout << com;
        for (int i = a.size() - 1; i > 0; i--)
        {
            sum -= a[i];
                // cout << a[i] / (extra + sum + 0.0) << endl;
            if ((kk - (double)(a[i] / (extra + sum + 0.0))) >= com) {
            }
            else
            {
                // cout << "h";
                extra += (ll)((ceil((a[i] * (ll)100) / (k + 0.0)) - sum - extra));
            }
        }
        // if (extra == 419)
        //     extra--;
        cout << extra << endl;
        t--;
    }
    return 0;
}