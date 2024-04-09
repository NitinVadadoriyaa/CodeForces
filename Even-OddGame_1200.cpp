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
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        bool turn = 1;
        ll x = 0, y = 0;
        for (auto ele : a)
        {
            if (turn == 1) {
                if (ele % 2 == 0)
                    x += ele;
            }
            else
            {
                 if (ele % 2 != 0)
                    y += ele;
            }
            turn = (turn + 1) % 2;
        }
        if (x > y) {
            cout << "Alice" << endl;
        }
        else if (x == y)
        {
            cout << "Tie" << endl;

        }
        else
        {
            cout << "Bob" << endl;

        }
        t--;
    }
    return 0;
}