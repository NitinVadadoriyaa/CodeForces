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
        vector<pair<int,int>> odd,even;
        int o = 0, e = 0;
        // cout << n << endl;
        for (int i = 1; i <= (2 * n); i++)
        {
            int num;
            cin >> num;
            // cout << num << endl;
            if (num % 2)
            {
                odd.push_back({num, i});
            }
            else {
                                even.push_back({num, i});


            }
        }
        // cout << o << e << endl;
        o = odd.size();
        e = even.size();
        int j = 0, k = 0;
        for (int i = 1; i < n; i++)
        {
            if ((j < o) && ((j + 1) < o)) {
                cout << odd[j].second << " " << odd[j + 1].second;
                j += 2;
            }
            else
            {
                cout << even[k].second << " " << even[k + 1].second;
                k += 2;
            }
           
        if (t == 1 && n-i == 1) {
        
         } else {
             cout << endl;
         }
        }
            t--;
    }
    return 0;
}