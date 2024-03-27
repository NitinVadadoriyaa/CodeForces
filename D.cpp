#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
void solve(vector<pair<int,int>> &a,int &n,int &m,int x,int y,unordered_map<int,bool>&hash,vector<vector<int>>&dp) {
    if (y >= a.size()) {
        hash[x] = true;
        dp[x][y] = 1;
        return;
    }
    if (dp[x][y] != -1)
        return;

    if (a[y].second == 0)
    {
        int c = (x + a[y].first) % n;
                solve(a, n, m, c, y + 1, hash, dp);
    }
    else if (a[y].second == 1)
    {
        int c = (n + x - a[y].first) % n;
                solve(a, n, m, c, y + 1, hash, dp);

    }
    else
    {
         int c = (x + a[y].first) % n;
                solve(a, n, m, c, y + 1, hash, dp);
            c = (n + x - a[y].first) % n;
                solve(a, n, m, c, y + 1, hash, dp);
    }
    dp[x][y] = 1;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    while (t) {
        int n,m,x;
        cin >> n >> m >> x;
        vector<pair<int,int>> a(m+1);
        for (int i = 1; i <= m; i++) {
            int k;
            cin >> k;
            char c;
            cin >> c;
            a[i].first = k;
            if (c == '0')
                a[i].second = 0;
            else if (c == '1')   
                a[i].second = 1;
            else 
                a[i].second = 2;
        }

        unordered_map<int, bool> hash;
        x--;
        vector<vector<int>> dp(n+1, vector<int>(m + 2, -1));
        solve(a, n, m, x, 1, hash,dp);
        cout << hash.size() << endl;
        vector<int> temp(hash.size());
        int p = 0;
        for (auto it : hash)
            temp[p++] = (it.first + 1);

        sort(temp.begin(), temp.end());
        for (int p = 0; p < temp.size(); p++) {
            cout << temp[p];
            if (temp.size() - p != 1)
                cout << " ";
        }
        if (t > 1) cout << endl;
        t--;
    }
    return 0;
}