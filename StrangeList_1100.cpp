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
        int n,x;
        cin >> n >> x;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // sum += a[i];
        }
        ll i = 1;
        while (true)
        {
            bool f = false;
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if (a[j] % x == 0) {
                    sum += (i * a[j]);
                    a[j] = a[j] / x;
                } else {
                    f = true;
                    break;
                }
            }
            if (f) {
                int t = j - 1;
                while (j < n)
                {
                    sum += (i * a[j++]);
                }
                i = i * x;
                while (t >= 0)
                {
                    sum += (i * a[t--]);
                }
                break;
            }
            i = i * x;
        }
        cout << sum << endl;
        t--;
    }
    return 0;
}