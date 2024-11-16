#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


//ctrl + space to run exsiting file.
int check(ll n,string str) {
    string base = to_string(n);
    int j = 0, i = 0;
    int cnt = 0;
    while (j < base.size() && i < str.size())
    {
        if (base[j] == str[i]) {
            j++;
            i++;
        } else {
            cnt++;
            i++;
        }
    }
    return cnt + str.size() - i + base.size() - j;
}
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
        string str = to_string(n);

        int ans = str.size() + 1;
        ans = min(ans, check(0, str));
        for (ll two = 1; two <= INT_MAX; two = two * 2)
        {
            // cout << two << endl;
            ans = min(ans, check(two, str));
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}