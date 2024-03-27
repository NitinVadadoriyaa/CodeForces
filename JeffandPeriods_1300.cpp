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
    int n;
    cin >> n;
    unordered_map<int, vector<int>> h;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        h[num].push_back(i);
    }
    int t = 0;
    vector<int> ans;
    for (auto it : h)
    {
        if (it.second.size() == 1) {
            t++;
            ans.push_back(it.first);
        } else {
            vector<int> &te = it.second;
            int diff = te[1] - te[0];
            int i = 1;
            for (i; i < te.size(); i++) {
                if (te[i]-te[i-1] != diff) {
                    break;
                }
            }
            if (i == te.size()) {
                t++;
                ans.push_back(it.first);
            }
        }
    }

    if (t) {
        sort(ans.begin(), ans.end());
        cout << t << endl;
        for (int &e : ans) {
            cout << e;
            cout << " ";
            if (h[e].size() == 1)
                cout << 0 << endl;
            else
                cout << h[e][1] - h[e][0] << endl;
        }
    } else {
        cout << 0 << endl;
    }
    return 0;
}