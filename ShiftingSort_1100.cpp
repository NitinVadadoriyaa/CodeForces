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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int>> data;
        for (int i = 0; i < n - 1; i++)
        {
            int mini = INT_MAX;
            int ind = -1;
            for (int j = i; j < n; j++)
            {
                if (mini > a[j]) {
                    mini = a[j];
                    ind = j;
                }
            }
            if (a[i] != mini) {
                data.push_back({i + 1, ind + 1,ind - i});
                for (int k = ind - 1; k >= i; k--)
                {
                    a[k + 1] = a[k];
                }
                a[i] = mini;
            }
        }
        cout << data.size() << endl;
        for (int i = 0; i < data.size(); i++) {
            cout << data[i][0] << " " << data[i][1] << " " << data[i][2];
            if (data.size() - i != 1)
                cout << endl;
        }
        t--;
        if (t != 0)
            cout << endl;
    }
    return 0;
}