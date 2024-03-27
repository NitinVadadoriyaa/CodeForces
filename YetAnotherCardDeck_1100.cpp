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
    int n,q;
    cin >> n >> q;

    vector<int> d(51, -1);
    for (int i = 1; i <= n ;i++) {
        int num;
        cin >> num;
        if (d[num] == -1)
            d[num] = i;
    }

    for (int i = 1; i <= q; i++) {
        int que;
        cin >> que;
        cout << d[que];
        if (i < q)
            cout << " ";

        for (int j = 1; j <= 50; j++) {
            if (d[j] != -1 && d[j] < d[que]) {
                d[j]++;
            }
        }
        d[que] = 1;
    }
    cout << endl;

    return 0;
}