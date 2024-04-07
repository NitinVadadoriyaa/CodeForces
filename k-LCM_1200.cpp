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
        int n,k;
        cin >> n >> k;
        if (n % 2 == 0 && n % 4 == 0) {
            cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
        } else if (n % 2 == 0) {
            n -= 2;
            cout << 2 << " " << n / 2 << " " << n / 2 << endl;
        } else  { // odd
            n -= 1;
            cout << 1 << " " << n / 2 << " " << n / 2 << endl;
        }
            t--;
    }
    return 0;
}