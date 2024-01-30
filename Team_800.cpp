#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n;
    cin >> n;
    int a, b, c;
    int ans = 0;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a+b+c >= 2) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}