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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll div = 2;
        ll p = (k / div);
        a[0] -= p;
        a[n - 1] -= p;
        if (k % div)
            a[0]--;

        int i = (a[0] <= 0) ? 1 : 0;
        for (i; i < n; i++)
        {
            if (a[i] <= 0) continue;
            if (a[0] < 0) {
                int b = a[0];
                a[0] += a[i];
                if (a[0] > 0) {
                    a[i] -= (-b);
                    break;
                }
            }
            else if (a[0] == 0)
            {
                break;
            } else {
                break;
            }
        }
        
        int j = (a[n-1] <= 0) ? n-2 : n-1;
        for (j; j >= i; j--) {
            if (a[j] <= 0) continue;
            
            if (a[n-1] < 0) {
                int b = a[n - 1];
                a[n - 1] += a[j];
                if (a[n-1] > 0) {
                    a[n-1] -= (-b);

                    break;
                }
            }
            else if (a[n-1] == 0)
            {
                break;
            } else {
                break;
            }
        }
        if (j < i) {
            cout << n << endl;
        } else {
            
                cout << n - (j - i + 1) << endl;
            
        }
            t--;
    }
    return 0;
}