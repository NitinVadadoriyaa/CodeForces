#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
bool com(pair<int,int>&p1,pair<int,int>&p2) {
    if( p1.first < p2.first)
        return true;
    else if(p1.first == p2.first)
        return p1.second < p2.second;
    return false;
}
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
        vector<pair<int,int>>d(n);
         unordered_map<int, bool>ind;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            d[i] = {num, i};
            ind[num] = true;
        }
        if (ind.size() == n) {
            cout << -1 << endl;
            t--;
            continue;
        }
        // for (auto it : d) {
        //     cout << it[0] << " " << it[1] << " " << it[2] << endl;
        // }
        sort(d.begin(),d.end(),com);
        int ans = 0;
        for (int i = 0; i < n-1; i++)
        {   
            if (d[i].first == d[i+1].first) {
                ans = max(ans, (n - (d[i + 1].second - d[i].second)));
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}