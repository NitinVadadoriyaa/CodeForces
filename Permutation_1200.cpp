#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


//ctrl + space to run exsiting file.
void sol(vector<int>&ans,vector<int>&v,int l,int r,int lev) {
    if (l > r)
        return;

    int maxInd = max_element(v.begin() + l, v.begin() + r + 1) - v.begin();
    ans[maxInd] = lev;
    sol(ans, v, l, maxInd - 1,lev + 1);
    sol(ans, v, maxInd + 1,r,lev + 1);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t,n,x,y;
    cin >> t ;
    while (t)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++)
            cin >> v[i];

        vector<int> ans(n, 0);
        sol(ans, v, 0, n - 1, 0);
        for (int i = 0; i < n;i++){
            cout << ans[i];
            if (n-i != 1)
                cout << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}