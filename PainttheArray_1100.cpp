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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == 2) {
            if (a[0] == a[1]) {
                cout << 0 << endl;
            } else {
            cout << max(a[0], a[1]) << endl;

            }
            t--;
            continue;
        }
        long long g1 = __gcd(a[0], a[2]);
        for (int i = 4; i < n; i+=2) {
            g1 = __gcd(g1, a[i]);
        }
        if (g1 != 1) {
            bool f = false;
            for (int i = 1; i < n; i += 2)
            {
                if (a[i] % g1 == 0) {
                    f = true;
                    break;
                }
            }
            if (f == false) {
                cout << g1 << endl;
                t--;
                continue;
            }
        }
        if (n == 3) {   
            if (a[0] % a[1] == 0 || a[2] % a[1] == 0) {
                cout << 0 << endl;
            }
            else
            {
                cout << a[1] << endl;
            }
            t--;
            continue;
        }
        g1 = __gcd(a[1], a[3]);
        for (int i = 5; i < n; i+=2) {
            g1 = __gcd(g1, a[i]);
        }
         if (g1 != 1) {
            bool f = false;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g1 == 0) {
                    f = true;
                    break;
                }
            }
            if (f == false) {
                cout << g1 << endl;
                t--;
                continue;
            }
        } 
            cout << 0 << endl;
            t--;
    }
    return 0;
}