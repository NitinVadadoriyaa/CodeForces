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
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int lastInd = -1;
    for (int j = n - 2; j >= 0; j--) {
        if (a[n-1] != a[j]) {
            lastInd = j;
            break;
        }
    }

    if (lastInd == -1) {
        cout << 0 << endl;
    } else {
        if (lastInd+1 < k) {
            cout << lastInd + 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
        return 0;
}