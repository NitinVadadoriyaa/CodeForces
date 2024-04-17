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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << a[0] - 1 << endl;
            t--;
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, a[i] + a[i + 1] - 2);
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}