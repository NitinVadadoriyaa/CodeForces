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
    
    int n;
    cin >> n;
    vector<bool> p(10000000, true);
    int cnt = 0;
    for (int i = 10000000 / 2; cnt < n; i++) {
        cnt++;
        cout << i << " ";
    }
    cout << endl;
    return 0;
}