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
        unordered_map<int, int> h;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] - i;
            // cout << a[i] << " ";
            h[a[i]]++;
        }
        int ans = 0;
        for (auto it : h) {
            // cout << it.first << " " << it.second << endl;
            if (it.second > 1)
            {
                ans += ((it.second * (it.second - 1)) / 2);
            }
        }

        cout << ans << endl;
        t--;
    }
    return 0;
}