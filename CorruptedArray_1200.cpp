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
        vector<ll> a(n + 2);
        unordered_map<ll, pair<int,int>> f;
        ll sum = 0;
        for (int i = 0; i < n + 2; i++)
        {
            cin >> a[i];
            sum += a[i];
            f[a[i]].first = i;
            f[a[i]].second++;
        }
        pair<int, int> target = {-1,-1};
        for (int i = 0; i < n+2; i++)
        {
            ll r = sum - a[i];
            if (f.find(r - a[i]) != f.end()) {
                // cout << r - a[i] << endl;
                if ((r - a[i]) == a[i] && f[a[i]].second > 1)
                {
                    target = {i, f[r - a[i]].first};
                    break;
                }
                else if ((r - a[i]) != a[i])
                {
                    target = {i, f[r - a[i]].first};
                    break;
                }
            }
        }
        if (target.first == -1) {
            cout << -1 << endl;
        } else if (target.first != target.second){
            for (int i = 0; i < n+2; i++)
            {
                if (target.first == i || target.second == i)
                    continue;
                cout << a[i];
                if (n+2-i != 1)
                    cout << " ";
            }
                
                    cout << endl;
        } else {
            int two = 2;
            for (int i = 0; i < n + 2; i++)
            {
                if (two && a[target.first] == a[i]) {
                    two--;
                    continue;
                }
                cout << a[i];
                if (n+2-i != 1)
                    cout << " ";
            }
                
                    cout << endl;
        }
            t--;
    }
    return 0;
}