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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << n * 3 << endl;
        for (int i = 1; i <= (n / 2); i++)
        {
            for (int j = 1; j <= 6; j++) {
                if (j % 2) {
                    cout << 1;
                }else
                    cout << 2;
                cout << " " << i << " " << (n / 2) + i << endl;
                
            }
        }
            t--;
    }
    return 0;
}