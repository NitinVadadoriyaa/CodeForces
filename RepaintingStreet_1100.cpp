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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, bool> f;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]] = true;            ;
        }
        
        int ans = INT_MAX;

        for(auto ele : f){
            int day = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != ele.first) {
                    day++;
                    i += k - 1;
                }
            }
            ans = min(day, ans);
        }
        cout << ans << endl;

        t--;
    }
    return 0;
}