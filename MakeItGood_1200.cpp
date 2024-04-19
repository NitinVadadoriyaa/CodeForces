#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxi = a[n - 1];
        vector<int> left_max(n);
        left_max[n - 1] = -1;
        for (int j = n - 2; j >= 0; j--)
        {
            left_max[j] = (maxi > a[j]) ? maxi : -1;
            maxi = max(maxi, a[j]);
        }

        vector<int> right_max(n);
        right_max[0] = -1;
        maxi = a[0];
        for (int j = 1; j < n; j++)
        {
            right_max[j] = (maxi > a[j]) ? maxi : -1;
            maxi = max(maxi, a[j]);
        }
        int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (left_max[i] != -1 && right_max[i] != -1) {
                ans = i;
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}