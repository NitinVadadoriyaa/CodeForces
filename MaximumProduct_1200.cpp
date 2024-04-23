#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


//ctrl + space to run exsiting file.
ll solve(vector<ll> &a,int i,int j,int ele) {
    ll ans = LLONG_MIN;

    ll res = 1;
    int n = a.size();
    ans = max(ans, res * a[0] * a[1] * a[2] * a[3] * a[n - 1]);
    ans = max(ans, res * a[0] * a[1] * a[2] * a[n-2] * a[n - 1]);
    ans = max(ans, res * a[0] * a[1] * a[n-3] * a[n-2] * a[n - 1]);
    ans = max(ans, res * a[0] * a[n-4] * a[n-3] * a[n-2] * a[n - 1]);
    ans = max(ans, res * a[n-5] * a[n-4] * a[n-3] * a[n-2] * a[n - 1]);

    return ans;
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
        int n;
        cin >> n;
        vector<ll> a(n);
        bool isZero = false;
        bool isAll = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                isZero = true;
            if (a[i] >= 0)
                isAll = false;
        }

        sort(a.begin(),a.end());
        
        if (isAll)
        {
            cout << a[n - 5] * a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] << endl;
            t--;
            continue;
        }

        ll ans = solve(a, 0, n - 1,0);
        // cout << ans << endl;
        if (isZero)
            ans = max((ll)0, ans);
        
        cout << ans << endl;
        t--;
    }
    return 0;
}