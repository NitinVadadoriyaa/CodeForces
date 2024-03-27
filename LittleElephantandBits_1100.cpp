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

    string s;
    cin >> s;
    string res;
    bool f = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && f) {
            f = false;
            cout << s.substr(0, i) << s.substr(i+1, s.size() - i + 1) << endl;
            return 0;
        }
    }
    cout << s.substr(0, s.size() - 1) << endl;

    return 0;
}