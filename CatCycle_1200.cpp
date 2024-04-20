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
        int n,k;
        cin >> n >> k;
        if (n % 2) {
            k--;
            int val = n / 2;
            cout << ((k + k / val) % n) + 1 << endl;
        }
        else
        {
            k--;
            cout << (k % n) + 1 << endl;
        }
            t--;
    }
    return 0;
}