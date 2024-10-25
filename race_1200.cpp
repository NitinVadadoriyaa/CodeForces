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
    while(t) {

        int n, m;
        cin >> n >> m;

        vector<vector<ll>> d(m, vector<ll>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> d[j][i];
            }
        }
        typedef pair<ll, pair<int, int>> pp;
        priority_queue<pp> maxH;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                maxH.push({d[i][j],{i,j}});
                if (maxH.size() > m)
                    maxH.pop();
            }
        }

        vector<vector<int>> vis(m, vector<int>(n, 0));

        while (maxH.size())
        {
            int i = maxH.top().second.first;
            int j = maxH.top().second.second;
            maxH.pop();
            vis[i][j] = 1; // minimum element
            // cout << i << j << endl;
        }

        vector<vector<ll>> ans(n, vector<ll>(m));

        for (int i = 0; i < m; i++) {
            ans[0][i] = d[i][0];
            bool isMinTaken = (vis[i][0] == 1) ? true : false;
            vis[i][0] = 2; // this cell chosen
            


            for (int p = 1; p < n; p++)
            {
                int x, y;

                for (int q = 0; q < m; q++)
                {
                    if (vis[q][p] == 2) continue;
                    if (vis[q][p] == 1) {
                        x = q;
                        y = p;

                        if (isMinTaken)
                            continue;
                        else
                            isMinTaken = true;
                        break;
                    }
                    x = q;
                        y = p;
                    break;
                }
                // cout << x << y << " ";
                vis[x][y] = 2;
                ans[p][i] = d[x][y];
            }
        }

        for (int i = 0; i < n; i++) {
            ll mini = INT_MAX;
            for (int j = 0; j < m; j++)
            {
                // cout << ans[i][j];
                mini = min(mini, ans[i][j]);
                if (m - j != 1)
                    cout << " ";
            }
                cout << mini;
            if (n-i != 1)
            cout << endl;
        }
        cout << endl;
        t--;
    }
    return 0;
}