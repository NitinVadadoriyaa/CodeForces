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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<int> z(n,0),o(n,0);
        if (a[0] == '0')
            z[0] = 1;
        else
            o[0] = 1;
        for (int i = 1; i < n; i++)
        {
            z[i] = z[i - 1];
            o[i] = o[i - 1];
            if (a[i] == '0')
            z[i]++;
            else
            o[i]++;
        }
        bool turn = true;
        int i = n - 1;
        for (; i >= 0; i--)
        {
            if (turn) {
                if (a[i] != b[i]) {
                    if (z[i] == o[i]) {
                        turn = !turn;
                    } else {
                        break;
                    }
                }
            } else {
                 if (a[i] == b[i]) {
                    if (z[i] == o[i]) {
                        turn = !turn;
                    } else {
                        break;
                    }
                }
            }
        }
        if (i < 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;

        }
            t--;
    }
    return 0;
}