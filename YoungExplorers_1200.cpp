#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef long double ld;

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
        vector<int> exp(n);
        for (int i = 0; i < n; i++)
            cin >> exp[i];

        sort(exp.begin(), exp.end());
        int ans = 0;
        int req = exp[0] - 1;
        for (int i = 1; i < n; i++)
        {
            if (req == 0) {
                ans++;
                req = exp[i] - 1;
            } else {
                req--;
                req += exp[i] - exp[i - 1];
            }
        }

        if (req == 0)
            ans++;

        cout << ans << endl;
        t--;
    }
    return 0;
}