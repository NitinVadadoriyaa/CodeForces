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
        sort(a.begin(), a.end());

        int ind = -1;
        int diff = INT_MAX;
        for (int i = 0;  i < n - 1; i++) {
            if (abs(a[i] - a[i+1]) < diff) {
                ind = i;
                diff = abs(a[i] - a[i + 1]);
            } else if (abs(a[i] - a[i+1]) == diff && i == n-2) {
                ind = n - 2;
                diff = abs(a[i] - a[i + 1]);
            }
        }
        // if (ind == 0 || ind == n-2 || n >= 5) {
        //     cout << a[ind];
        //     for (int j = 0; j < n; j++) {
        //         if (j == ind || j == ind+1) continue;
        //         cout <<  " " <<  a[j];
        //     }
        //         cout << " " << a[ind + 1] << endl;
        // }
        // else
        // {
        //     cout << a[ind];
        //     for (int j = n-1; j >= 0; j--) {
        //         if (j == ind || j == ind+1) continue;
        //         cout << " " << a[j];
        //     }
        //         cout << " " << a[ind + 1] << endl;
        // }
         cout << a[ind];
            for (int j = ind+2; j < n; j++) {
                cout << " " << a[j];
            }
            for (int i = 0; i < ind; i++) {
                cout << " " << a[i];
            }
                cout << " " << a[ind + 1] << endl;
        t--;
    }
    return 0;
}