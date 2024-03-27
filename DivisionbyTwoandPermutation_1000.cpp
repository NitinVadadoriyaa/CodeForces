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
    while(t) {

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());
        unordered_map<int, bool> fre;
        for (int i = 0; i < v.size(); i++) {
            int x = v[i];
            while (x) {
                if (x > n) {
                    x = x / 2;
                    continue;
                }
                if (fre.find(x) == fre.end()) {
                    fre[x] = true;
                    break;
                }
                x = x / 2;
            }
            if (x == 0) {
                cout << "NO" << endl;
                break;
            }
        }

        if (fre.size() == n)
            cout << "YES" << endl;

        t--;
    }
    return 0;
}