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
    while (t) {
        int n;
        cin >> n;
        // vector<int> a(n);
        unordered_map<int, vector<int>> hs;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            hs[num].push_back(i);
        }
        if (n == 1) {
            cout << 0 << endl;
            t--;
            continue;
        }
        int ans = n;
        for (auto it : hs) {
            vector<int> &vec = it.second;
            int part = 0;
            for (int ind = 0; ind < (vec.size() - 1); ind++)
            {
                if (vec[ind + 1] - vec[ind] > 1) {
                    part++;
                }
            }
            if (vec.size() == 1) {
                if (vec[0] == 0 || vec[0] == n-1) {
                    part = 1;
                } else {
                    part = 2;
                }
               
            } else {
               if (vec[0] != 0) {
                   part++;
               }
               if (vec[vec.size() - 1] != n-1)
                   part++;
            }
            ans = min(ans, part);
        }

        cout << ans << endl;
        t--;
    }
    return 0;
}