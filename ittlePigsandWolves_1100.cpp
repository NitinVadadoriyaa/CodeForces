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
    
        int n,m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            a[i] = s;
        }
        
        map<pair<int, int>, bool> vis;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 'P') {
                    // cout << i << endl;
                    if (i - 1 <= 0 && a[i - 1][j] == 'W' && vis.find({i - 1, j}) == vis.end())
                    {
                        vis[{i - 1, j}] = true;
                    }
                    else if (j - 1 <= 0 && a[i][j - 1] == 'W' && vis.find({i, j - 1}) == vis.end())
                    {
                        vis[{i, j - 1}] = true;
                    }
                    else if (j + 1 < m && a[i][j + 1] == 'W' && vis.find({i, j + 1}) == vis.end())
                    {
                        vis[{i, j + 1}] = true;
                    }
                    else if (i + 1 < n && a[i + 1][j] == 'W' && vis.find({i + 1, j}) == vis.end())
                    {
                        vis[{i + 1, j }] = true;
                    } else {
                        cout << " f";
                    }
                }
            }
            

        }

        cout << 2 << endl;

        return 0;
}