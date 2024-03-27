#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
bool com(pair<int,int>&a,pair<int,int>&b) {
    if (a.first < b.first)
        return true;
    else if (a.first == b.first)
        return a.second > b.second;
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
        int n,m;
        cin >> m >> n;
        vector<pair<int,int>> a(n),b(n);
        
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            a[i] = {num, i};
            b[i] = {num, i};
        }
        sort(a.begin(), a.end(), com);
        // for(auto p : a) {

        //     cout << p.first << " " << p.second << endl;
        
        // }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int j = 0;
            for (j; j < n; j++)
            {
                if (a[j].first == b[i].first && a[j].second == b[i].second) {
                    break;
                }
            }
            int r = i - 1;

            while (r >= 0) {
                for (int k = j - 1; k >= 0; k--) {
                     if (a[k].first == b[r].first && a[k].second == b[r].second) {
                         ans++;
                         break;
                    }
                }
                r--;
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}