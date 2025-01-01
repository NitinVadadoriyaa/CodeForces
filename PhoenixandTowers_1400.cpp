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
        int n,m,k;
        cin >> n >> m >> k;
        vector<pp> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        vector<int> ans(n);
        int currInd = 0;
        while (true)
        {
            for (int i = 1; i <= m; i++)
            {
                ans[a[currInd++].second] = i;
                if (currInd == n)
                    break;
            }
            if (currInd == n)
                break;
        }
        cout << "YES" << endl;
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}