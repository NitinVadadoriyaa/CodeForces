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
        string s;
        cin >> s;

        vector<int> l(n,0),r(n,0);
        int z = 0;
        int o = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0') {
                l[i] = 1 + z;
                z++;
                r[i] = o;
            }
            else
            {
                r[i] = 1 + o;
                o++;
                l[i] = z;
            }
        }
        int ind;
        int maxi = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            int lz = l[i];
            
           
            int ro = r[n-1] - r[i];
            if ((ceil((i+1) / 2.0) <= lz) && (ceil((n - i - 1) / 2.0) <= ro)) {
                int mid = (n / 2);
                int dif = abs(mid - (i + 1));
                if (maxi > dif) {
                    maxi = dif;
                    ind = i + 1;
                } 
            }
        }
        
         if (ind == n && (ceil(n / 2.0)) <= r[n-1]) {
            
             if (maxi >= abs(((n / 2)) - 0))
             {
                 ind = 0;
                 maxi = abs((n / 2) - 0);
             }
         }

            cout << ind << endl;
        t--;
    }
    return 0;
}