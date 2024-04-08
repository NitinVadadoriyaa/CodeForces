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
        int n,c,d;
        cin >> n >> c >> d;
        unordered_map<int, int> h;
        int mini = INT_MAX;
        vector<vector<int>> a(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                    cin >> a[i][j];
                    h[a[i][j]]++;
                    mini = min(mini, a[i][j]);
            }
        }

        a[0][0] = mini;
        bool f = true;
        for (int j = 1; j < n; j++)
        {
            a[0][j] = a[0][j-1] + d;
            if (h[ a[0][j-1] + d] == 0) {
                f = false;
                break;
            }
            h[a[0][j]]--;
        }
        if (f == false ) {
            cout << "NO" << endl;
        } else {

            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    a[i][j] = a[i-1][j] + c;
                    if (h[ a[i][j] ] == 0) {
                        f = false;
                        break;
                    }
                    h[a[i][j]]--;
                }
            if (f == false)
                break;
            }
        if (f) {
            cout << "YES" << endl;

        } else {
            cout << "NO" << endl;

        }
        }

            t--;
    }
    return 0;
}