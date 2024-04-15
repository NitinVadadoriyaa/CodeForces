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
        string a;
        cin >> a;
        vector<int> data(26, 0);
        for (int i = 0; i < n; i++)
        {
            data[a[i] - 'a'] = 1;
        }
        int ans = n;
        for (int i = 0; i < 26; i++)
        {
            if (data[i] == 0) continue;
            int del = 0;
            int l = 0, r = n - 1;
            while(l < r) {
                if (a[l] == a[r]) {
                    l++;
                    r--;
                } else if (a[l] == char(i + 'a')) {
                    del++;
                    l++;
                } else if (a[r] == char(i + 'a')) {
                    del++;
                    r--;
                } else {
                    del = n;
                    break;
                }
            }
            ans = min(ans, del);
        }
        if (ans == n)
            ans = -1;
        cout << ans << endl;

        t--;
    }
    return 0;
}