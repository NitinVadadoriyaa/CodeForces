#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.

void solve(vector<vector<int>> &d, int &ans,string s,bool vis[]) {
    if (s.size() == 5) {
        int sum = 0;
        for (int i = 0; i <= 3; i++)
        {
            int row, col;
            for (int j = i; j <= 3; j += 2)
            {
                row = s[j] - '0';
                col = s[j+1] - '0';
                sum += d[row][col];
                sum += d[col][row];
            }
        }
        ans = max(ans, sum);
        return;
    }
    if (vis[1] == false) {
        vis[1] = true;
        solve(d, ans, s + "1",vis);
        vis[1] = false;

    }
     if (vis[2] == false) {
        vis[2] = true;
        solve(d, ans, s + "2",vis);
        vis[2] = false;
    }
    if (vis[3] == false) {
        vis[3] = true;
        solve(d, ans, s + "3",vis);
        vis[3] = false;

    } if (vis[4] == false) {
        vis[4] = true;
        solve(d, ans, s + "4",vis);
        vis[4] = false;

    } if (vis[5] == false) {
        vis[5] = true;
        solve(d, ans, s + "5",vis);
        vis[5] = false;

    }
    
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    vector<vector<int>> d(6, vector<int>(6));
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> d[i][j];
        }
    }

    int ans = INT_MIN;
    bool vis[6];
    memset(vis, false, sizeof(vis));
    solve(d, ans, "",vis);

    cout << ans << endl;
    return 0;
}