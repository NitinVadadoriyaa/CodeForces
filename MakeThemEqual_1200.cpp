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
        char c;
        cin >> c;
        string s;
        cin >> s;
        unordered_map<int, bool>m;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != c)
                m[i + 1] = true;
        }
        if (m.size() == 0) {
            cout << 0 << endl;
        }
        else if (m.find(n) == m.end()) {
            cout << 1 << endl;
            cout << n << endl;
        } else {
            int i = (n / 2) + 1;
            for (i; i <= (n - 1); i++) {
                if (m.find(i) == m.end()) {
                    cout << 1 << endl;
                    cout << i << endl;
                    break;
                }
            }
            if (i > n-1) {
                cout << 2 << endl;
                cout << n <<" " << n-1 << endl;
            } 
            // cout << n-1 << endl;
        }

            t--;
    }
    return 0;
}