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
        vector<int> a(n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x = max(x, a[i]);
        }

        unordered_map<int, bool> vis;
        int y = 0;
        for (auto ele : a)
        {
            if (x % ele == 0) {
                if (vis.find(ele) == vis.end()) {
                    vis[ele] = true;

                } else {
                    y = max(ele, y);
                }
            } else {
                 y = max(ele, y);
            }
        }
        cout << x << " " << y << endl;
        return 0;
}