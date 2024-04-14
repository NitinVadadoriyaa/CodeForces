#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


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
        bool f = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0) {
                if(a[i] != a[i-1]) {
                    f = false;
                }
            }
        }
        if (f) {
            cout << -1 << endl;
        } else {

            int lst = -1;
            int ans = n;
            for (int i = 0; i < n; i++) {
                if (a[i] != a[0]) {

                    ans = min(ans, i - lst - 1);
                    lst = i;
                }
            }
                    ans = min(ans, n - lst - 1);
                    if (ans == n) {
                        cout << -1 << endl;
                    }
                    else  cout << ans << endl;
        }
            t--;
    }
    return 0;
}