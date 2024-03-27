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
    int h = 0, th = 0;
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (num == 100)
            h++;
        if (num == 200)
            th++;
        sum += num;
    }

    if ((h + 2 * th)  % 2) {
        cout << "NO" << endl;
        return 0;
    }
    if (th % 2) {
        if (h >= 2 && (h % 2) == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        if (h % 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
        return 0;
}