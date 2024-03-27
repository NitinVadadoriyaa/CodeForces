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
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    vector<int> a(26, 0),b(26,0);
    for (char ch : s1)
        a[ch - 'a']++;

    for (char ch : s2)
        b[ch - 'a']++;

    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            cout << "NO" << endl;
            return 0;

        }
    }
    int nm = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
            nm++;
        if (nm > 2) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}