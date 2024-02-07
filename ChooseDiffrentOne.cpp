#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
        int n,m,k;
        cin >> n >> m >> k;
        unordered_map<int, int> a;
        unordered_map<int, int> b;
        int num;
        for (int i = 0; i < n; i++) {
            cin >> num;
            if (num <= k)
            a[num]++;
        }
        for (int i = 0; i < m; i++) {
            cin >> num;
            if (num <= k)
            b[num]++;
        }
        int c = 0;
        k = k / 2;
        if (a.size() < k || b.size() < k) {
            cout << "NO" << endl;
        } else {
                for (auto e : a)
                {
                    if (b.find(e.first) != b.end())
                        c++;
                }
            
            if ((a.size() + b.size() - c) >= (2 * k)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;

            }
        }

        t--;
    }
    return 0;
}