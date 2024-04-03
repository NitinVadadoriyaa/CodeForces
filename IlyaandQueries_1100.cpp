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

    string s;
    cin >> s;

    int n = s.size();
    int m;
    cin >> m;
    vector<int> a(n);
    a[0] = 0;
    // cout << 0 << " ";
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i-1];
        if (s[i] == s[i-1])
            a[i]++;
        // cout << a[i] << " ";
    }
    // cout << endl;

    while(m) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << a[r] - a[l] << endl;
        m--;
    }

    return 0;
}