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
        vector<int> vis(n + 1, 0);
        vector<int> extrEle;
        vector<int> remainingEle;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if ( 1 <= a[i] && a[i] <= n) {
                if (vis[a[i]] == 0) {
                    vis[a[i]] = 1;
                } else {
                    extrEle.push_back(a[i]);
                }
            } else {
                    extrEle.push_back(a[i]);
            }
        }
        for (int i = 1; i <= n; i++) {
            if (vis[i] == 0) {
                remainingEle.push_back(i);
            }
        }
        sort(remainingEle.begin(), remainingEle.end());
        vector<int> re;
        for (auto el : extrEle) {
            re.push_back(el - ((el / 2) + 1));
        }
        sort(re.begin(), re.end());

        int ans = remainingEle.size();
        for (int i = re.size() - 1; i >= 0; i--)
        {
            if (re[i] < remainingEle[i]) {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;

        t--;
    }
    return 0;
}