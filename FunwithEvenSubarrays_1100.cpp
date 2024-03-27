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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        int j = n - 1;
        while(j > 0 && a[j] == a[j-1])
            j--;
        if (j == 0) {
            cout << 0 << endl;
        } else {
            while(true) {

                int len = n - j;
                int i = j - 1;
                bool isNe = false;
                for (i = j - 1; (i >= 0 && (len)); i--)
                {
                    if (a[i] != a[j]) {
                        a[i] = a[j];
                        isNe = true;
                    }
                    len--;
                }
                if (isNe) {
                    ans++;
                }
                    j = i+1;
                    while(j > 0 && a[j] == a[j-1])
                        j--;
                    if (j <= 0)
                    {
                        break;
                    }
            }
            cout << ans << endl;
        }
        t--;
    }
    return 0;
}