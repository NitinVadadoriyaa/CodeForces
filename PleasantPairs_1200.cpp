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
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i + 1;
        }
        ll ans = 0;
        for (int sum = 2; sum <= (n + n - 1); sum++)
        {
            int limi = sqrt(sum);
            for (int fac = 1; fac <= limi; fac++) {
                if (sum % fac == 0) {
                    int otherFac = sum / fac;
                    if (fac != otherFac && mp.find(fac) != mp.end() && mp.find(otherFac) != mp.end() && mp[fac] + mp[otherFac] == sum) {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}