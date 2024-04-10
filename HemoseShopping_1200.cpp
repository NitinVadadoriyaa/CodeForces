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
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        if (2 * x <= n) {
            cout << "YES" << endl;
        } else {
            sort(b.begin(), b.end());
            bool f = true;
            for (int i = n - x; i < x; i++)
            {
                if (a[i] != b[i]) {
                    f = false;
                    break;
                }
            }
            if (f) {
            cout << "YES" << endl;

            } else {
            cout << "NO" << endl;

            }
        }

        t--;
    }
    return 0;
}