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
        vector<int> a(n);
        unordered_map<int, int> h;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            int ind = 0;
            for (int i = 0; i < 32; i++) {
                if (num & (1 << i))
                    ind = i + 1;
            }
            a[i] = ind; 
            h[ind]++;
            // cout << a[i] << " ";
        }
        long long ans = 0;

        for (auto it : h) {
            ans = ans + ((ll)(it.second) * (ll)(it.second - 1) / 2);
        }

        cout << ans << endl;
        t--;
    }
    return 0;
}