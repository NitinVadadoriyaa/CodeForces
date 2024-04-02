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
        unordered_map<string, int> hs;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            hs[a[i]] = i;
        }
        int  ind = -1;
        vector<int> vis(n, 0);
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            string temp = a[i];
            reverse(temp.begin(), temp.end());
            if (hs.find(temp) != hs.end()) {
                if (hs[temp] != i) {
                    if (vis[i] == 0) {
                        ans = temp + ans + a[i];
                        vis[i] = vis[hs[temp]] = 1;
                    }
                } else {
                    ind = i;
                }
            }
        }

        if (ans.size() > 0 && ind >= 0) {
            int len = ans.size();
            len = len + m;
            cout << len << endl;
            cout << ans.substr(0, ans.size() / 2) + a[ind] + ans.substr(ans.size() / 2, ans.size() / 2);
        } else if (ans.size()) {
            cout << ans.size() << endl;
            cout << ans << endl;
        } else if (ind >= 0) {
            cout << m << endl;
            cout << a[ind] << endl;
        } else {
            cout << 0 << endl;
        }

        return 0;
}