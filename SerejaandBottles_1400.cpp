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

    int n;
    cin >> n;
    unordered_map<int, int> bo;
    unordered_map<int, int> open;
    vector<pair<int, int>> v(n);
    unordered_map<string, int> f;
    for (int i = 1; i <= n; i++)
    {
        int b, a;
        cin >> b >> a;
        v[i - 1] = {b, a};
        string key = to_string(b) + "$" + to_string(a);
        f[key]++;
        bo[b]++;
        open[a]++;
    }
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first != v[i].second) {
            ans = ans - bo[v[i].second];
            bo[v[i].second] = 0;
        } else {
            string key = to_string(v[i].first) + "$" + to_string(v[i].second);
            if (f[key] > 1) {
                ans = ans - f[key];
                f[key] = 1;
                bo[v[i].first] = 0;
            }
        }
    }

    cout << ans << endl;
    return 0;
}