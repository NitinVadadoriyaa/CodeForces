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
    
        ll n,k,x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        
        vector<vector<ll>>pir;
        ll mini = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            // cout << a[i] << " ";
            if (a[i + 1] - a[i] > x)
            {
                pir.push_back({mini, a[i]});
                mini = a[i + 1];
            }
        }

            pir.push_back({mini, a[n-1]});
            if (k == 0){

                cout << pir.size() << endl;
            }
            else {

            // cout << pir.size() << endl;
                vector<ll> kuse;
                if (pir.size() <= 1) {
                                cout << pir.size() << endl;
                                return 0;
                }
                for (int i = 0; i < (pir.size() - 1); i++)
                {
                    long long dif = pir[i + 1][0] - pir[i][1];
                

                    kuse.push_back(dif-1);
                    
                }
                int ans = pir.size();

                sort(kuse.begin(), kuse.end());
                for (auto it : kuse) {


                    if ((it / x) <= k) {
                        ans--;
                        k -= it / x;
                    } else
                        break;
                }
                cout << ans << endl;
            }
            return 0;
}