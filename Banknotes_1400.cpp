/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.
bool test(ll num, vector < ll>&a,ll k) {
    for (int i = a.size() - 1; i >= 0; i--) {
        if (num < a[i])
            continue;
        else {
            ll div = num / a[i];
            num -= (div * a[i]);
            k -= div;
        }
    }
    if (k < 0)
        return true;
    return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
    int t;
    cin >> t;
    while (t) {
        ll n, k;
        cin >> n >> k;
        k += 1;
        vector<int> a(n);
        for (int &x : a)
        {
            cin >> x;
            int cur = 1;
            while (x--)
                cur *= 10;
            x = cur;
    }
        long long res = 0;
        for (int i = 0; i < n; i++) {
            int cnt = k;
            // cout << cnt << " ";
            if (i + 1 < n)
                cnt = min(cnt, a[i + 1] / a[i] - 1);
            res += a[i] * 1LL * cnt;
            k -= cnt;
            // cout << res << " ";
        }
        // cout << endl;
        cout << res << '\n';
        t--;
    }
    return 0;
}