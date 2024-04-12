#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file->

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input->txt", "r", stdin);
    // freopen("output->txt", "w", stdout);
    // #else
    // #endif
    int t;
    cin >> t;
    while (t) {
        int n,m;
        cin >> n >> m;
        cout << m << endl;
        vector<int> a(n);
        unordered_map<int, int> fre;
        // cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout << i << " " << a[i] << endl;
            a[i] = a[i] % m;
            fre[a[i]]++;
            // cout << a[i] << endl;
        }

        int ans = 0;
        if (fre[0] != 0)
        {
            ans++;
            fre.erase(0);
        }
        // cout << fre.size() << endl;
        unordered_map<int, int>::iterator it = fre.begin();
        for (it; it != fre.end(); it++)
        {
            int ele = it->first;
            int ele_fre = it->second;
            if (fre[ele] == 0)
                continue;
            else if (ele == m - ele)
            {

                ans++;
                fre[ele] == 0;
            } else {
               if (fre[m - ele] == 0) {
                   ans += fre[ele];
                   fre[ele] = 0;
                   continue;
               }
               int mini = min(fre[ele], fre[m - ele]);
               fre[ele] -= mini;
               fre[m - ele] -= mini;
               ans++;
               if (fre[ele])
               {
                   fre[ele]--;
               }
               if (fre[m - ele]) {
                   fre[m - ele]--;
               }
            }

        }
        for (auto it : fre) {
            ans += it.second;
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}