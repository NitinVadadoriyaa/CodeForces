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
        int n,tag;
        cin >> n >> tag;
        vector<int> a(n);
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // m[a[i]]++;
        }
        // vector<int> dp(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (m.find(a[i]) == m.end()) {
                m[a[i]] = 0;
                m[tag - a[i]] = 1;
            } else  {
                if (a[i] == tag-a[i]) {
                    m[a[i]] = !m[a[i]];
                }
            }
            cout << m[a[i]];
            if (n-i != 1)
                cout << " ";
            else
            cout << endl;
        }
            t--;
    }
    return 0;
}