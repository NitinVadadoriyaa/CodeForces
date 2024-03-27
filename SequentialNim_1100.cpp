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
        // cout << n << endl;
        bool win = true; // true --> first , false --> second
        int i = 1;
        for (; i < n; i++) {
            int num;
            cin >> num;
            if (num != 1)
            {
                i++;
                break;
            }
            else
            {
                win = !win;
            }
        }
                // cout << i << endl;
        
        while(i <= n) {
            int num;
            cin >> num;
            i++;
        } // just read all number from array ....
        // cout << i << endl;
        if (win)
            cout << "First" << endl;
        else 
            cout << "Second" << endl;

        t--;
    }
    return 0;
}