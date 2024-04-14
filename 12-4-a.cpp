#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;

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
        int n,m,k;
        cin >> n >> m >> k;
        int maxi = ceil(n / (m + 0.0));
        n = n - maxi;
        if (k >= n) {
             cout << "NO" << endl;
            
        }else {
             cout << "YES" << endl;

        }
        t--;
    }
    return 0;
}