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
        ll a,b,x,y,n;

        cin >> a >> b >> x >> y >> n;
        ll t1 = a - min(a - x, n);
        ll  t2 = b - min(b - y, n);
        if (t1 < t2) {
            n = n - min(a- x,n);
            a = t1;

            t1 =  min(b - y, n);
            b = b - t1;
            n = n - t1;
            cout << a * b << endl;
        }
        else
        { // a>= b
            n = n - min(b - y,n);
            b = t2;

            t2 = min(a - x, n);
            a = a - t2;
            n = n - t2;
            cout << a * b << endl;

        }

            t--;
    }
    return 0;
}