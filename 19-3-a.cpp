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
        int a,b,c;
        cin >> a >> b >> c;

        int ans = a;
        int re = b / 3;
        int remi = b % 3;
        ans += re;
        if (remi > 0 && remi + c < 3) {
            cout << -1 << endl;
        } else {
            ans += ceil((remi + c) / 3.0);
            cout << ans << endl;
        }
        t--;
    }
    return 0;
}