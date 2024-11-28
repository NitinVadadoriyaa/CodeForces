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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> x(n);
        x[0] = 0;
        int prevMade = a[0];
        for (int i = 1; i < n; i++) {
            int newX = 0;
            for (int j = 0; j < 32; j++)
            {
                if ((1 << j) & prevMade) {
                    if ((1 << j) & a[i]) {
                        //nothing
                    } else {
                        newX = newX | (1 << j);
                    }
                }
            }
            x[i] = newX;
            prevMade = x[i] | a[i];
        }
        for (int i = 0; i < n; i++) {
            cout << x[i];
            if (n - i != 1)
                cout << " ";
        }
                    cout << endl;
            t--;
    }
    return 0;
}