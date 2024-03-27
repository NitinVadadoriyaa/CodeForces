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
    while (t) {
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
            b[a[i]] = i;
        }

        vector<int> ans(n);
        int ind = 0;
        for (int i = n - 1; i >= 0; i--) {
            ans[n - i - 1] = b[i];
            // cout << ans[n - i - 1] << " "; 
        }
        // cout << endl;

        int c = 0;
        int last = n;
        for (int i = 0; i < n; i++) {
            if (last > ans[i]) {
                int ind = ans[i];
                while(ind < last) {
                    c++;
                    cout << a[ind] + 1;
                    if (n-c != 0) {
                        cout << " ";
                    }
                    ind++;
                }
                last = ans[i];
            }
        }
        cout << endl;
        t--;
    }
    return 0;
}