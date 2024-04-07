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
        string s;
        cin >> s;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                z++;
        }
        // cout << z << endl;
        if (z % 2 == 0)
        {
                        
                cout << "BOB" << endl;
            
        }
        else
        {
            z--;
            if (z > 0)
                cout << "ALICE" << endl;
            else 
                cout << "BOB" << endl;

        }
            t--;
    }
    return 0;
}