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
        if (n == 1) {
            cout << 0 << endl;
        } else {
            int squ = sqrt(n);
            int que = n / squ;
            int remin = n % que;
            if (remin == 0) {
                cout << squ - 1 + que - 1 << endl;
            
            } else {
                int target = min(squ, remin);
                int sum = target + squ -  target + que - 1;
                cout << sum << endl;
                
            }
        }
            t--;
    }
    return 0;
}