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
        int x,y;
        cin >> x >> y;
        // vector<int> a(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> a[i];
        // }

        if (x == 0 || y == 0) {
            cout << 0 << endl;
        } else {
            int l = 0, r = min(x, y);
            int ans = 0;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                int maxi = max(x, y);
                int mini = min(x, y);
                if ((maxi -( 2 * mid) + mini - mid) >= 0) {
                    ans = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            cout << ans << endl;
        }
            t--;
    }
    return 0;
}