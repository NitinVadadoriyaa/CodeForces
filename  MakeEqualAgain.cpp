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
    while(t)    {
        int n;
        cin >> n;
        int a[n];
        int e;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0) {
                e = a[i];
            } else {
                if (e != a[i])
                    flag = false;
            }
        }
        if (flag) {
            cout << 0 << endl;
            
        } else {
            vector<vector<int>> t;
            int s = 0;
            for (int e = 1; e < n; e++) {
                if (a[s] == a[e]) {
                    continue;
                } else {
                    t.push_back({a[s], s, e - 1});
                    s = e;
                }
            }
            if (a[s] == a[n-1]) {
                t.push_back({a[s], s, n-1});
            }
            // for (auto e : t) {
            //     cout << e[0] << " "<< e[1] <<  " " << e[2] << endl;
            // }

            if (t[0][0] == t[t.size() - 1][0]) {
                cout << t[t.size() - 1][1] - 1 - t[0][2] << endl;
            } else if ((t[0][2] - t[0][1] + 1) > (t[t.size() - 1][2] - t[t.size() - 1][1] + 1)) {
                cout << n - t[0][2]-1 << endl;
            } else {
                cout << t[t.size() - 1][1] << endl;
            }
        }

        t--;
    }

    return 0;
}