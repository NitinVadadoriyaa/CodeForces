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
        vector<pp> a(n);
        for (int i = 0; i < n; i++)
        {

            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        vector<int> prefixMinInd(n);
        prefixMinInd[0] = a[0].second;
        for (int i = 1; i < n; i++)
        {
            prefixMinInd[i] = min(prefixMinInd[i - 1], a[i].second);
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {

            pp ele;
            cin >> ele.first;
            ele.second = ele.first; // can be any value
            int ind = lower_bound(a.begin(), a.end(), ele) - a.begin();
            // cout << ind << " ";
            ans = min(ans, prefixMinInd[ind - 1] + i);
        }
        cout << ans << endl;

        t--;
    }
    return 0;
}