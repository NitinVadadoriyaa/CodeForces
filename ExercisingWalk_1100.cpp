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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        bool f = true;
        if (x1 == x2) {
            if (a + b != 0) {
                f = false;
            }
        } else {
            if (x1 > (x - a + b) || (x-a+b) > x2) {
                f = false;
            }
        }
         if (y1 == y2) {
            if (c + d != 0) {
                f = false;
            }
        }
        else {
            if (y1 > (y - c + d) || (y-c+d) > y2) {
                f = false;
            }
        }

        if (f) {
            cout << "YES " << endl;
        } else  {
            cout << "NO " << endl;

        }

        t--;
    }
    return 0;
}