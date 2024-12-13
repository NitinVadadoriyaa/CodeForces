/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.
bool subStr(string &str,string &s) {
    // int i = 0, j = 0;
    for (int i = 0; i < str.size(); i++) {
        int j = 0,k = i;
        while (j < s.size() && k < str.size() && str[k] == s[j]) {
            k++;
            j++;
        }
        if (s.size() == j)
            return true;
        
    }
    return false;
}
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
        string str;
        cin >> str;
        int i = 0, j = 0;
        int ans = INT_MAX;
        vector<string> db = {"aa", "aba", "aca", "abca", "acba", "abbacca", "accabba"};
        for (auto s : db)
        {
            if (subStr(str,s)) {
                ans = s.size();
                break;
            }
        }
        cout << ((ans == INT_MAX) ? (-1) : (ans)) << endl;
        t--;
    }
    return 0;
}