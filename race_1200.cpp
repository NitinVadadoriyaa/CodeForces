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

        vector<vector<ll>> d(n, vector<ll>(m));
        typedef pair<ll, pair<int, int>> pp;
        vector<pp> minM;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> d[i][j];
                minM.push_back({d[i][j], {i, j}});
            }
        }
        sort(minM.begin(), minM.end());

        vector<vector<int>> vis(n, vector<int>(m, 0));

        vector<int> getIt(m, 0);
        for (int p = 0; p < m; p++)
        {
            int i = minM[p].second.first;
            int j = minM[p].second.second;
            vis[i][j] = 1; // minimum element
            getIt[j] = 1;
            // cout << i << j << endl;
            // cout << minM[p].first << endl;

        }

        vector<vector<ll>> ans(n, vector<ll>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == 1) {
                    if (getIt[j] == 1) {
                        getIt[j] = 2;
                    }
                    else
                    {
                        for (int p = 0; p < m; p++) {
                            if (getIt[p] == 0) {
                                swap(d[i][p], d[i][j]);
                                getIt[p] = 1;
                                break;
                            }
                        }

                    }
                } 
            }
        }
            for (int i = 0; i < n; i++)
            {
                ll mini = INT_MAX;
                for (int j = 0; j < m; j++)
                {
                    cout << d[i][j];
                    if (m - j != 1)
                        cout << " ";
                }
            if (n-i != 1)
            cout << endl;
        }
        cout << endl;
        t--;
    }
    return 0;
}