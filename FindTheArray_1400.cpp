/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

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
        vector<ll> a(n);
        ll sumOddPos = 0, sumEvenPos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0) {
                sumEvenPos += (abs(a[i] - 1));
            }
            else
            {
                sumOddPos += (abs(a[i] - 1));
            }
        }
        if (sumOddPos > sumEvenPos) {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    cout << 1 << " ";
                }
                else
                {
                    cout << a[i] << " ";
                }
            }
        } else {
            for (int i = 0; i < n; i++) {

                if (i % 2 == 0)
                {
                    cout << a[i] << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
        }
        cout << endl;
        t--;
    }
    return 0;
}