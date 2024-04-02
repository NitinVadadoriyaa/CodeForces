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
    
        int n,m,k;
        cin >> n >> m >> k;
        vector<bitset<20>> a(m+1);
        for (int i = 0; i < m+1; i++) {
            int num;
            cin >> num;
            a[i] = bitset<20>(num);
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            int dif = 0;
            for (int j = 0; j < 20; j++)
            {
                if (a[m][j] != a[i][j])
                    dif++;
            }
            if (dif <= k) {
                ans++;
            }
        }
        cout << ans << endl;
        return 0;
}