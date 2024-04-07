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

        if (a[0] == 1) {
            cout << n+1 << " ";
            for (int i = 1; i <= n; i++)
            {
                cout << i;
                if (i == n)
                    cout << endl;
                else
                    cout <<" ";
            }
        }
        else if (a[n-1] == 0) {
            for (int i = 1; i <= n+1; i++) {
                cout << i;
                if (i == n+1)
                    cout << endl;
                else
                    cout <<" ";
            }
        } else {
            bool flag = false;
            int i = 0;
            for (; i < n - 1; i++)
            {
                if (a[i] == 0 && a[i+1] == 1) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                for (int j = 1; j <= i + 1; j++) {
                    cout << j << " ";
                }
                cout << n+1 << " ";
                for (int j = i + 2; j <= n; j++) {
                    cout << j;
                    if (j != n)
                        cout << " ";
                    else cout << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
            t--;
    }
    return 0;
}