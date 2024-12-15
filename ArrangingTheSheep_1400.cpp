/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

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
        string str;
        cin >> str;

        vector<ll> starDis;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '*') {
                starDis.push_back((i + 1) - cnt);
                cnt++;
            }
        }

        ll ans = 1e18;
        ll l = 0, r = n;
        while(l <= r) {
            ll mid1 = l + (r - l) / 2;
            ll mid2 = mid1 + 1; // for comparing and take decision

            ll costMid1 = 0, costMid2 = 0;
            for (auto it : starDis) {
                costMid1 += abs(it - mid1);
                costMid2 += abs(it - mid2);
            }
            ans = min(ans, min(costMid1, costMid2));

            if (costMid1 < costMid2) {
                r = mid1 - 1;
            } else {
                l = mid1 + 1;
            }

        }
        cout << ans << endl;
        t--;
    }
    return 0;
}