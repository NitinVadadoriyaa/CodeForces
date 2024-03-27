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
    while(t)     {
        ll x;
        cin >> x;
        if (x == 1) {
            cout << "NO" << endl;
            t--;
            continue;
        }
        ll r = pow(x, double(1.0 / 3.0));
        ll n = 1;
        
        for (n = 1; n <= r; n++)
        {
            ll res = x - (n * n * n);
        // cout << n << endl;

            ll p = pow(res,double(1.0 / 3.0));
            if (p == 0) continue;
            
            if (p * p * p == res) {
                cout << "YES" << endl;
                break;
            } else if((p+1)*(p+1)*(p+1) == res) {
                cout << "YES" << endl;
                break;
            }
        }
        if (n > r) {
            cout << "NO" << endl;
        }
            t--;
    }
    return 0;
}