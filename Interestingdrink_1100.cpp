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
   
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int q;
        cin >> q;
        while(q) {
            int p;
            cin >> p;
            int ind = upper_bound(a.begin(), a.end(), p) - a.begin();
            cout << ind << endl;
            q--;
        }
       
    return 0;
}