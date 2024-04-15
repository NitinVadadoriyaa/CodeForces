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
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll sum = 0;
        int i = 0, j = 0;
        for (i; i < n; i) {
            j = i;
            if (a[i] < 0) {
                ll maxi = a[i];
                while (j < n && a[j] < 0)
                {
                    maxi = max(a[j], maxi);
                    j++;
                }
                sum += maxi;
                // cout << maxi << " ";
                i = j;
            }
            else
            {
                ll maxi = a[i];
                while (j < n && a[j] > 0)
                {
                    maxi = max(a[j], maxi);
                    j++;
                }
                sum += maxi;
                // cout << maxi << " ";

                i = j;
            }
        }
        cout << sum << endl;
        t--;
    }
    return 0;
}