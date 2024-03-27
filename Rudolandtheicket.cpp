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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (int i = 0; i < n;i++)
            cin >> a[i];

            for (int i = 0; i < m;i++)
            cin >> b[i];
            long ans = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++){
                    if (a[i] + b[j] <= k)
                        ans++;
                }
            }

            cout << ans << endl;
            t--;
    }

    return 0;
}