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

    long long ans = 0;
    vector<vector<int>> d(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            cin >> d[j][i];
        }
    }
        for (int j = 0; j < m; j++) {
            sort(d[j].begin(), d[j].end());

            for (int k = 0; k < n;  k++) {
        
            ans = ans + (-d[j][k] * (k)) + (d[j][k] * (n - k - 1));
        }
    }
          
       cout << ans << endl;

        t--;
    }
    return 0;
}