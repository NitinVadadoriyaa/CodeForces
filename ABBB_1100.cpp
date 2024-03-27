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
       
        string str;
        cin >> str;
        int n = str.size();
        int a = 0, b = 0;
        n--;
        while (n > -1)
        {
            if (str[n] == 'B')
                b++;
            else {
                if (b > 0) {
                    b--;
                } else {
                    a++;
                }
            }
            n--;
        }
        cout << (b % 2) + a << endl;
        
        t--;
    }
    return 0;
}