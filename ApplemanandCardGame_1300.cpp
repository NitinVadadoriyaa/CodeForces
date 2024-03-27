#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n, k;
    cin >> n >> k;
    vector<int>f(26,0);
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        f[c - 'A']++;
    }

    sort(f.begin(), f.end(),greater<int>());

    long long ans = 0;
    for (int i = 0; i < 26; i++) {
        if (k == 0)
            break;
        if (f[i] <= k)
        {
            ans += ((long long)f[i] * (long long)f[i]);
            k -= f[i];
        }
        else
        {
            ans += ((long long )k * (long long)k);
            break;
        }
    }

    cout << ans << endl;
    
    return 0;
}