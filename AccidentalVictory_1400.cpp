/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.
bool com(pp &a, pp &b) {
    if (a.second < b.second)
        return true;
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
        vector<pp> a(n);
        ll totalToken = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
            totalToken += (ll)a[i].first;
        }
        sort(a.begin(), a.end());
        vector<ll> prefix(n);
        prefix[0] = a.front().first;
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + (ll)a[i].first;
        }
        // for (auto it : prefix)
        //     cout << it << " ";
        // cout << endl;
        unordered_map<int, bool> eliminate;
        for (int i = n-2; i >= 0; i--) {
            if (prefix[i] >= ceil(totalToken / 2.0) or prefix[i] >= a[i + 1].first) {
                if (eliminate.find(a[i+1].second) != eliminate.end()) {
                    eliminate[a[i].second] = false;
                }
            } else {
                eliminate[a[i].second] = false;
            }
        }

        sort(a.begin(), a.end(), com);
        cout << n - eliminate.size() << endl;
        for (int i = 0; i < n; i++) {
            if (eliminate.find(a[i].second) == eliminate.end()) {
                cout << a[i].second + 1 << " ";
            }
        }
        cout << endl;
        t--;
    }
    return 0;
}