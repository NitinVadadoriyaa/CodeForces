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
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n),b(n);
        unordered_map<int, int> f;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        b[i] = a[i];
        f[b[i]] = i;
        }

        if (n == k) {
            cout << "YES" << endl;
            
        } else {

            sort(a.begin(), a.end());
            for (int i = 0; i < n; i) {
                int ind = f[a[i]];
                for (int j = ind; j < n; j++)
                {
                    if (a[i] != b[j]) {
                        break;
                    }
                    i++;
                }
                k--;
            }

            if (k < 0) {
                cout << "NO" << endl;

            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}