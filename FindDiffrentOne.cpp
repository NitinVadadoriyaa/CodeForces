#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int q;
        cin >> q;
        while (q)
        {
            int l, r;
            cin >> l >> r;
            // cout << l << r << endl;
            unordered_map<int, int> d;
            l--;
            r--;
            for (l; l <= r; l++)
            {
                d[a[l]] = l;
                if (d.size() >= 2)
                {
                    bool b = true;
                    for (auto it : d)
                    {
                        cout << it.second + 1;
                        if (b)
                            cout << " ";
                        b = false;
                    }
                    cout << endl;
                    break;
                }
        }
        if (d.size() != 2) {
            cout << -1 <<" " << -1 << endl;
        }

            q--;
        }
        cout << endl;
        t--;
    }
    return 0;
}