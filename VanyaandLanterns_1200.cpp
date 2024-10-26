#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


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
        double maxDis = 0.0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];   
        }
        sort(a.begin(), a.end());
        int lastLoc = 0;
        for (int i = 0; i < n; i++) {
            if (lastLoc == 0 && a[i] != 0) {
                maxDis = max(maxDis, a[i] + 0.0);
            } else if (a[i] == l) {
                maxDis = max(maxDis, a[i] - lastLoc + 0.0);
            } else {
                maxDis = max(maxDis, ((a[i] - lastLoc) / 2.0));
            }
            lastLoc = a[i];
        }
       
        cout << maxDis << endl;
        return 0;
}