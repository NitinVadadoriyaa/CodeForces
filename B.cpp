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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int i = 0;
        for (i; i < n - 2; i++)
        {
            if (a[i] == 0) continue;
            bool f = false;
                if ((a[i+1] - (a[i] * 2)) < 0 || (a[i+2] - a[i]) < 0) {
                    f = true;
                }

            
            if (f) {
                cout << "NO" << endl;
                break;
            }
            a[i + 1] = (a[i + 1] - (a[i] * 2));
            a[i+2] = (a[i + 2] - a[i]);
        }
        if (i >= n-2 ) {
                if (a[i] == 0 && a[i+1] == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
        }
            t--;
    }
    return 0;
}