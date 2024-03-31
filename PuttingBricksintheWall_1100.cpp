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
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int p = a[0][1] - '0';
        int q = a[1][0]- '0';
        int r = a[n - 1][n - 2]- '0';
        int s = a[n - 2][n - 1]- '0';
        // cout << p << q << r << s << endl;
        // cout << 2 < endl;
        
        if (p == q && r == s && p != r) {
            cout << 0 << endl;
        } else if (p == q && r == s && p == r) {
            cout << 2 << endl;
            cout << "1 2" << endl
                 << "2 1" << endl;
        } else if (p == q && r != s && p == r) {
            cout << 1 << endl;
            cout << n << " " << n - 1 << endl;
        } else if (p == q && r != s && p == q) {
            cout << 1 << endl;
            cout << n-1 << " " << n  << endl;
        } else if (p != q && r == s && r == p) {
            cout << 1 << endl;
            cout << 1 << " " << 2  << endl;
        } else if (p != q && r == s && r == q) {
            cout << 1 << endl;
            cout << 2 << " " << 1  << endl;
        } else if (p != q && r != s) {
            cout << 2 << endl;
            if (p == 0 && r == 1) {
                cout << "1 2" << endl;
                cout << n << " " << n - 1 << endl;

            } else if (p == 0 && q == 1) {
                 cout << "1 2" << endl;
                            cout << n-1 << " " << n  << endl;

            } else if (p == 1 && r == 0) {
                cout << "1 2" << endl;
                cout << n << " " << n - 1 << endl;

            } else {
                 cout << "1 2" << endl;
                            cout << n-1 << " " << n  << endl;

            }
        } 
        t--;
    }
    return 0;
}