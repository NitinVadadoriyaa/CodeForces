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
        int n,x;
        cin >> n >> x;
        // vector<int> a(n);
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num % 2) odd++;
            else
                even++;
        }

        if (odd == 0) {
            cout << "NO" << endl;
        } else if (even < x-1) {
            odd--;
            if (odd % 2)
                odd--;
            x--;
           
           
            if (x % 2)
            {
                x -= min(odd,x - 1);
                if (even >= x) {

                cout << "YES" << endl;
                } else {
                cout << "NO" << endl;

                }
            }
            else
            {
                if (x <= even + odd) {
                cout << "YES" << endl;

                } else
                cout << "NO" << endl;
            }
        } else {
            cout << "YES" << endl;

        }
            t--;
    }
    return 0;
}