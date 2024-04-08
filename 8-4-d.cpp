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
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);

        unordered_map<int, int> bmap,amap;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i < m) {
                amap[a[i]]++;
            }
        }
         for (int i = 0; i < m; i++) {
            cin >> b[i];
            bmap[b[i]]++;
         }
        //  cout << amap.size() << bmap.size();
         int ans = 0;
         int mt = 0;
         for (auto it : amap)
         {
             if (bmap.find(it.first) != bmap.end()) {
                 mt += min(bmap[it.first], it.second);
             }
         }
         
         if (mt >= k)
             ans++;

         for (int i = 1; i <= (n - m); i++)
         {
             amap[a[i - 1]]--;
            //  cout << a[i - 1] << " ";
             if (bmap.find(a[i - 1]) != bmap.end())
             {
                 if (bmap[a[i - 1]] > amap[a[i - 1]])
                 {
                     mt -= 1;
                 }
             }
            //  cout << mt << " ";
             
             amap[a[i + m - 1]]++;
            //  cout << a[i +m - 1] << " ";

             if (bmap.find(a[i + m - 1]) != bmap.end())
             {
                 if (bmap[a[i + m - 1]] >= amap[a[i + m - 1]])
                 {
                     mt += 1;
                 }
             }
            //  cout << mt <<endl;

             if (mt >= k)
                 ans++;
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}