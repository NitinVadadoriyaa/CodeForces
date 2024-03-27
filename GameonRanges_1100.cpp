
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
bool com(vector<int>&a,vector<int>&b) {
    if (a[0] < b[0])
        return true;
    else if(a[0] == b[0])
        return a[1] < b[1];
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
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            a[i] = {r - l, l, r};
        }
        sort(a.begin(), a.end(), com);

        unordered_map<int, bool> f;
        for(auto &v:a) {
            for(int l = v[1]; l <= v[2]; l++) {
                if (f.find(l) == f.end()) {
                    cout << v[1] << " " << v[2] << " " << l;
                    f[l] = true;
                    if (n - f.size() != 0)
                        cout << endl;
                }
            }
        }
        if (t != 1) cout << endl;
        t--;
    }
    return 0;
}