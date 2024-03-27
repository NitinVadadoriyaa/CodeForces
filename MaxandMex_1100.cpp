#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
int mex = 0;
int getM(std::unordered_map<int, int> &f) {
    while(f.find(mex) != f.end())
        mex++;
    return mex;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif
    int t;
    cin >> t;
    while (t) {
        mex = 0;
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        unordered_map<int, int> f;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            maxi = max(maxi, v[i]);
            f[v[i]]++;
        }
        
        unordered_map<string, bool> dp;
        int pad = 0;
        for (int i = 0; i < k; i++)
        {
            if (f.find(mex) != f.end()) mex = getM(f);
            
            string key = to_string(mex) + "%" + to_string(maxi);

            if (dp.find(key) != dp.end()) {
                break;
            }
                int ne = ceil((mex + maxi + 0.0) / 2);
                dp[key] = true;
                if (mex == ne && mex == maxi + 1) {
                    pad = k - i;
                    break;
                }
                maxi = max(ne, maxi);
                f[ne]++;
        }
         cout << f.size() + pad << endl;
            t--;
    }
    return 0;
}