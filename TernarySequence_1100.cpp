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
        int a, b, c;
        cin >> a >> b >> c;
        int x, y, z;
        cin >> x >> y >> z;
        

        int temp = min(a, z);
        a = a - temp;
        z = z - temp;

        if (z == 0) {
            cout << 2 * min(c,y) << endl;
        } else {
            temp = min(z, c);
            z = z - temp;
            c = c - temp;
            cout << (2 * min(c, y)) - (2 * z) << endl;
        }
        t--;
    }
    return 0;
}