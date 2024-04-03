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
        double n;
        cin >> n;
        int l = 3, r = 1000000;
        double ang = 0;
        while (l <= r)
        {
            int mid = (r + l) / 2;
            // mid
            ang = ((mid - 2.0) * 180 / mid);
            if (n == ang) {
                break;
            } 
            if (n > ang) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (ang == n) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
        t--;
    }
    return 0;
}