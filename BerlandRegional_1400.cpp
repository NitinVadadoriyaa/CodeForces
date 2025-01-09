/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

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
        vector<pp> a(n);
        map<int, vector<ll>> hash;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].second;
            hash[a[i].first].push_back(a[i].second);
        }
        map<int, vector<ll>> preHash;
        for (auto it : hash) {
            sort(it.second.begin(), it.second.end(),greater());
            ll sum = 0;
            for (int i = 0; i < it.second.size(); i++)
            {
                sum += it.second[i];
                preHash[it.first].push_back(sum);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            ll ans = 0;
            for (auto it : preHash)
            {
                int ind = ((it.second.size() / i) * i) - 1;
                if (ind >= 0) {
                    ans += it.second[ind];
                }
            }
            cout << ans << " ";
        }
        cout << endl;
            t--;
    }
    return 0;
}