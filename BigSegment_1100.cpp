#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
bool com(vector<int>&a, vector<int>&b) {
    if (a[0] < b[0])
        return true;
    if (a[0] == b[0])
        return a[1] < b[1];
    return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    // int i = 1;
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        mini = min(mini, l);
        maxi = max(maxi, r);
        a[i] = {l, r, i + 1};
    }

    sort(a.begin(), a.end(), com);
    for (int i = 0; i < n; i++) {
        if (a[i][0] <= mini && a[i][1] >= maxi) {
            cout << a[i][2] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}