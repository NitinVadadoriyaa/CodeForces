/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<ll, ll> pp;


//ctrl + space to run exsiting file.
int find(vector<ll>&a,ll &defend) {
    int l = 0, r = a.size() - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] <= defend) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int m;
        cin >> m;
        vector<pp> dragon(m);
        for (int i = 0; i < m; i++) {
            ll defend, attack;
            cin >> defend >> attack;
            dragon[i] = {defend, attack};
        }

        sort(a.begin(), a.end());
        

        for (auto it : dragon)
        {
            ll defend = it.first;
            ll attack = it.second;
            // cout << attack;

            int ind = find(a, defend);
            // cout << ind << endl;
            if (ind == -1)
            {
                // cout << (sum - a[0]);
                cout << (((sum - a[0]) > attack) ? (0) : (abs((sum - a[0]) - attack))) << endl;
            }
            else if (a[ind] == defend)
            {
                cout << (((sum - a[ind]) > attack) ? (0) : (abs((sum - a[ind]) - attack)) ) << endl;
            }
            else if (a[ind] < defend)
            {
                ll case1 = (((sum - a[ind]) > attack) ? (defend - a[ind]) : ((abs((sum - a[ind]) - attack)) + defend - a[ind]));
                int othInd = lower_bound(a.begin(),a.end(),defend) - a.begin();
                if (othInd == a.size()) {
                    cout << case1 << endl;
                    continue;
                } else {
                    ll case2 = (((sum - a[othInd]) > attack) ? (0) : (abs((sum - a[othInd]) - attack)));
                    cout << min(case1, case2) << endl;
                }
            }
        }

            return 0;
}