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
        string a, b;
        cin >> a >> b;

        int n = a.size();
        // cin >> n;
        int i = 0;
        for (; i < n; i++)
        {
            int ad = a[i] - '0';
            int bd = b[i] - '0';
            if (ad > bd) {
                for (int j = i+1; j < n; j++) {
                    ad = a[j] - '0';
                    bd = b[j] - '0';
                    if (ad > bd) {
                        char c = a[j];
                        a[j] = b[j];
                        b[j] = c;
                    }
                }
                break;

            } else if (bd > ad){
                for (int j = i+1; j < n; j++) {
                    ad =a[j] - '0';
                    bd = b[j] - '0';
                    if (ad < bd) {
                        char c = a[j];
                        a[j] = b[j];
                        b[j] = c;
                    }
                }
                break;
            }
        }
        cout << a << endl
             << b << endl;
        t--;
    }
    return 0;
}