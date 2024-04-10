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
        map<ll, int> fre;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            fre[a[i]]++;
            sum += a[i];
        }

        double tar = sum / (n + 0.0);
        ll ans = 0;

        for (auto it : a)
        {
            ll a = it;
            ll sub = (n * a);
            ll b = (sum * 2) - sub;
            b = b / n;
            if (((sum - a - b) / (n - 2.0)) == tar) {
                if (fre.find(b) != fre.end()) {
                    if (a == b) {
                        if (fre[b] > 1) {
                            ans += (fre[b] - 1);
                            fre[a]--;
                        }
                    } else {
                        ans += fre[b];
                        fre[a]--;
                    }
                }
            }
        }

        cout << ans << endl;
        t--;
    }
    return 0;
}