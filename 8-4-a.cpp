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
        int n,a,b;
        cin >> n >> a >> b;
        if (2*a > b) {
            int k = n / 2;
            int r = n % 2;
            if (r) {
                cout << a + (k * b) << endl;
            } else {
                cout << (k * b) << endl;

            }
        } else {
                cout << a * n<< endl;
        }
            t--;
    }
    return 0;
}