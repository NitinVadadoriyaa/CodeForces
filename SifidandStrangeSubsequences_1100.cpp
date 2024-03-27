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
    while(t) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n;i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        int mini = INT_MAX;
        int i = 1;
        for (i; i < n; i++)
        {
            mini = min(mini, abs(a[i] - a[i - 1]));
            if (a[i] > mini)
                break;
        }

        cout << i << endl;
        t--;
    }
    return 0;
}