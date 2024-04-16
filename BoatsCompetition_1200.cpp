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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (n == 1) {
            cout << 0 << endl;
        } else {
            int mini = a[0] + a[1];
            int maxi = a[n - 1] + a[n - 2];
            int ans = 0;
            for (int sum = mini; sum <= maxi; sum++)
            {
                int pir = 0;
                vector<bool> vis(n, false);
                for (int i = 0; i < n; i++) {
                    if (vis[i])
                        continue;
                    vis[i] = true;
                    for (int j = 0; j < n; j++)
                    {
                        if (vis[j]) continue;
                        if (a[i] + a[j] == sum) {
                            pir++;
                            // a[i] = true;
                            vis[j] = true;
                            break;
                        }
                    }
                }
                ans = max(ans, pir);
            }
            cout << ans << endl;
        }
        t--;
    }
    return 0;
}