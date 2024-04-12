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
        int x;
        cin >> x;
        // vector<int> a(n);
        int tar = 0;
        int i = 1;
        for (; tar < x; i++)
        {
            tar += i;
        }
        i--;
        if ((tar - x == 0) || (tar - x != 1)) {
            cout << i << endl;
        } else {
            cout << i + 1 << endl;
        }
        t--;
    }
    return 0;
}