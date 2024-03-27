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

    ll n;
    cin >> n;
    unordered_map<ll, ll> h;
    ll m1 = -1, m2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        ll nu;
        cin >> nu;
        h[nu]++;
        m1 = max(m1, nu);
        m2 = min(m2, nu);
    }
    if (m1 == m2) {
        cout << 0 << " " << (n * (n - 1)) / 2 << endl;
    } else {
        cout << m1 - m2 << " " << (h[m1] * h[m2]) << endl;
    }
        return 0;
}