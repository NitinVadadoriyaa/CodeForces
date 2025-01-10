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
        unordered_map<int, vector<ll>> hash;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].second;
            hash[a[i].first].push_back(a[i].second);
        }
        unordered_map<int, vector<ll>> preHash;
        int maxSize = 1;
        for (auto it : hash)
        {
            sort(it.second.begin(), it.second.end(),greater());
            ll sum = 0;
            maxSize = max(maxSize, (int)it.second.size());
            for (int i = 0; i < it.second.size(); i++)
            {
                sum += it.second[i];
                preHash[it.first].push_back(sum);
            }
        }
        // cout << maxSize << endl;
        vector<ll> ans(n, 0);
        for (auto it : preHash) // O(K), k is number of university
        {
           // each university have x students
           for (int i = 1; i <= it.second.size(); i++)
           { // at most x group contribute it....
               ans[i - 1] += (it.second[ ((it.second.size() / i) * i) - 1] );
           }
            //    cout << ans << " ";
        }
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
            t--;
    }
    return 0;
}