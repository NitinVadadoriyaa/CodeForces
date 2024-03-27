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
        int n;
        cin >> n;
        vector<vector<int>> a(n+1, vector<int>(n));
        unordered_map<int, int> past;
        unordered_map<int, int> curr;
        for (int i = 0; i < n; i++)
        {
            cin >> a[0][i];
            curr[a[0][i]]++;
            past[a[0][i]]++;
        }

        int q;
        cin >> q;
        int ind = 1;
        while(past.size() != curr.size() || ind == 1) {
            for (int i = 0; i < n; i++) {
                a[ind][i] = curr[a[ind - 1][i]];
            }
            unordered_map<int, int> temp;
            for(auto &it : curr) {
                temp[it.second] = temp[it.second] + it.second;
            }
            past = curr;
            curr = temp;
            ind++;
        }
        // for (int i = 0; i < ind; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // return 0;
        for (int que = 0; que < q; que++)
        {
            int ax, k;
            cin >> ax >> k;
            if (k >= ind)
            {
                cout << a[ind - 1][ax - 1] << endl;
            }
            else
            {
                cout << a[k][ax - 1] << endl;
            }
            }
            t--;
    }
    return 0;
}