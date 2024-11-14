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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int ans = 0;
        int right = n-1;
        int left = n - k - 1;
        for (int i = k; i > 0; i--)
        {
            int x = a[right--];

            int y = a[left--];
            ans += y / x;
        }
        for (int i = left; i >= 0; i--)
            ans += a[i];
        cout << ans << endl;
        t--;
    }
    return 0;
}