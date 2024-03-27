#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
bool solve(int i,int n,string s) {
    if (i == 4 && n == 0) {
        cout << s << endl;
        return true;
    }
    if (i == 4)
        return false;
    if (n == 0)
        return false;

    for (int ii = 1; ii <= 26; ii++) {
        s.push_back(char(ii - 1 + 'a'));
        if (solve(i + 1, n - ii, s))
            return true;
        s.pop_back();
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
        solve(1,n,"");
        t--;
    }
    return 0;
}