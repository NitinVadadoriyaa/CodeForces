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

        int h = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));
        // cout << h << m << endl;
        if (h > 12) {
            if (h > 21) {
                cout << h - 12 << ":" << s.substr(3, 2) << " " << "PM" << endl ;
            
            } else {
                cout << "0" << h-12 << s.substr(2, 3 )<< " " << "PM" << endl ;
            }
            
        } else if (h == 12) {
            cout << s << " " << "PM" << endl;
            
        } else if (h == 0) {
            cout << "12:" << s.substr(3, 2)<< " " << "AM" << endl ;
        } else {
            cout << s << " AM" << endl;
        }
        t--;
    }
    return 0;
}