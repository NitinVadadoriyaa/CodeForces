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
        // cout << n ;
        // return 0;
        bool tt = true;
        for (int i = 1; i <= (2 * n); i += 2)
        {
            
            bool te = tt;
            for (int j = 1; j <= (2 * n); j += 2)
            {
                if (te)
                cout << "##";
                else
                    cout << "..";
                te = !te;
            }
            cout << endl;
             te = tt;

            for (int j = 1; j <= (2 * n); j += 2) {
               if (te)
                cout << "##";
                else
                    cout << "..";
                te = !te;
            }
            cout << endl;
            // break;
            tt = !tt;
        }

            t--;
    }
    return 0;
}