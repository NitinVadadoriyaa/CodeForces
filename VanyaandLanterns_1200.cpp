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
   
        int n,l;
        cin >> n >> l;
        vector<int> a(n);
        long double maxDis = 0.0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];   
        }
        sort(a.begin(), a.end());
        int lastLoc = -1;
        for (int i = 0; i < n; i++) {
            if (lastLoc == -1 && a[i] != 0) {
                maxDis = max(maxDis, a[i] + (ld)0.0);
            } else if (a[i] == l && lastLoc == -1) {
                maxDis = max(maxDis, a[i] + (ld)0.0);
            } else {
                maxDis = max(maxDis, ((a[i] - lastLoc) / (ld)2.0));
            }
            lastLoc = a[i];
        }
        if (a.back() != l) {
            maxDis = max(maxDis, (ld)(l - a.back()+0.0));
        }
        // ld p = 22258199.5000000;

        cout << fixed << setprecision(7) << maxDis<< endl;
        return 0;
}