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
        ll a, b, c;
        cin >> a >> b >> c;
        ll h = a + b + c;
        // cout << h << endl;
        ll temp = 0;
        bool f = false;
        ll i;
        temp = (ll)9 * i;
        i = h / 9;
        if (((h % 9) == 0) && (i <= a && i <= b && i <= c))
        {
            cout << "YES" << endl;
            } else  {
                cout << "NO" << endl;
                
            }
        
        // if ()
        t--;
    }
    return 0;
}