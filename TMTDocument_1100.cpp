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
        vector<char> a(n);
        int m = 0;
        int tt = 0;
        vector<int> mm,ttt;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 'M') {
                m++;
                mm.push_back(i);
            }
            if (a[i] == 'T') {
                tt++;
                ttt.push_back(i);
            }
        }
        
        if (a[0] != 'T' || a[n-1] != 'T' || (m*2 != tt)) {
            cout << "NO" << endl;
        } else {
          
            int i = 0, j = 0;
            
                for (i,j; (j < ttt.size() && i < mm.size()); j++,i++) {
                    if (mm[i] < ttt[j])
                        break;
                }
            
            if(i < mm.size()){
                cout << "NO" << endl;
                t--;
                continue;
            }
            i = mm.size() - 1, j = ttt.size() - 1;
            for (i, j; (j >= 0 && i >= 0); j--, i--)
            {
                if (mm[i] > ttt[j])
                    break;
            }
            if(i >= 0){
                cout << "NO" << endl;
                t--;
                continue;
            }else {
                cout << "YES" << endl;
            }
        }

        t--;
    }
    return 0;
}