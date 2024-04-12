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
        
        vector<int> ans_a(m, 0);
        for (int i = 0; i < n; i++)
        {
            string ori;
            cin >> ori;
            for (int j = 0; j < m; j++)
            {
                ans_a[j] = ans_a[j] ^ ori[j];
            }
        }
        
        for (int i = 0; i < n - 1; i++)
        {
            string ori;
            cin >> ori;
            for (int j = 0; j < m; j++)
            {
                ans_a[j] = ans_a[j] ^ ori[j];
            }
        }
        string ans;
        for (int i = 0; i < m; i++) {
            ans.push_back(char(ans_a[i]));
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}