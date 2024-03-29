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
        vector<vector<int>> a(n,vector<int>(m,0));
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            }
        }

        unordered_map<int, int> row, col;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) {
                if (a[i][j]) {
                    row[i]++;
                    col[j]++;
                }
            }   
        }
        int r = n - row.size();
        int c = m - col.size();
        int mini = min(r, c);
        if (mini % 2 == 0) {
            cout << "Vivek"<< endl;
        } else {
            cout << "Ashish"<< endl;
        }
        t--;
    }
    return 0;
}