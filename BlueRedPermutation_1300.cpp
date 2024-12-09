/*SHREE GANESHAY NAMH*/
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
        string col;
        cin >> col;

        vector<int> blue, red;
        for (int i = 0; i < n; i++) {
            if (col[i] == 'B') {
                blue.push_back(a[i]);
            }
            else
            {
                red.push_back(a[i]);
            }
        }
        sort(blue.begin(), blue.end());
        sort(red.begin(), red.end());

        string ans = "YES";
        for (int i = n; i > 0; i--)
        {
            if (red.size()) {
                if (red.back() <= i) {
                    red.pop_back();
                } else {
                    ans = "NO";
                    break;
                }
            } else if (blue.back() >= i) {
                blue.pop_back();
            } else {
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}