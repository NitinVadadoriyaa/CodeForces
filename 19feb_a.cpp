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
        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
        }
        if (a > b) {
            cout << 'A' << endl;

        } else {
            cout << 'B' << endl;
        }
        t--;
    }
    return 0;
}