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
        int n,m,p;
        cin >> n >> m >> p;

        if (n < m && m < p) {
            cout << "STAIR" << endl;
        } else if (n < m && m > p) {
            cout << "PEAK" << endl;
        } else {
            cout << "NONE" << endl;
        }
            t--;
    }
    return 0;
}