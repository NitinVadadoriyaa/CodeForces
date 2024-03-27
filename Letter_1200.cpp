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

    unordered_map<char, int> f;
    char c;
    string str;
    getline(cin, str);
  
    for (auto c : str)
    {
        f[c]++;
    }
    getline(cin, str);
    
    for (auto c : str)
    {
        if (c == ' ') continue;
        // cout << c << endl;
        if (f.find(c) != f.end()) {
            if (f[c] == 0) {
                // cout << c << endl;
                cout << "NO" << endl;
                return 0;
            }
            f[c]--;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}