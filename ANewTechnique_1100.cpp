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
        int n,m;
        cin >> n >> m;
        // cout << n << m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) 
                cin >> a[i][j];
        }
        unordered_map<int, int> h;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int num;
                cin >> num;
                h[num] = j; // row number
            }
        }
            vector<vector<int>> ans(n);
        for (int i = 0; i < n; i++) {
            int ansInd = h[a[i][0]];
            ans[ansInd] = a[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m;j++) {
                cout << ans[i][j];
                if (m-j != 1)
                    cout << " ";
            }
            cout << endl;
        }
            t--;
    }
    return 0;
}