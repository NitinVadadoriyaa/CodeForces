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
        int prev, curr;
        if (n % 2 != 0)
        {
            bool incr = true;
            for (int i = 0; i < n; i++)
            {
                cin >> curr;
                if (i != 0) {
                    if (curr <= prev)
                        incr = false;
                }
                prev = curr;
            }
            if (incr) {
            cout << "NO" << endl;
                
            } else {
            cout << "YES" << endl;

            }
        }
        else
        {
            cout << "YES" << endl;
        }
            t--;
    }
    return 0;
}