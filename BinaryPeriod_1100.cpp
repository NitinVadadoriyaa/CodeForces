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
        string s;
        cin >> s;
        int n = s.size();
        // vector<int> a(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> a[i];
        // }
        int ans = 1;
        cout << s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i-1] != s[i]) {
                ans = 2;
                break;
            }
           
            // cout << s[i];
        }

        for (int i = 1; i < n; i++) {
             if (ans == 2) {
                if (s[i-1] == s[i]) {

                if (s[i] == '0')
                    cout << '1';
                else
                    cout << '0';
                }
                cout << s[i];
             }
             else
             {
                 cout << s[i];
             }
        }
            cout << endl;

        t--;
    }
    return 0;
}