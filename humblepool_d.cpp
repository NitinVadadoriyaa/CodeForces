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
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        bool isDivisible = true;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % x)
                isDivisible = false;
            sum += a[i];
        }
        if (isDivisible) {
            cout << -1 << endl;
        } else if (sum % x != 0 ){
            cout << n << endl;  
        } else {
            int i = 0;
            for (; i < n; i++) {
                if (a[i] % x) break;
            }
            int j = n - 1;
            for (; j >= 0;j--) {
                if (a[j] % x) break;
            }
            cout << n - min(i + 1,n-j) << endl;
            
        }
            t--;
    }
    return 0;
}