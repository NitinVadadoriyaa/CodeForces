#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
void solve(int i,int num,vector<int> &data) {
    if (i >= 9) {
        return;
    }

    int n1 = num * 10 + 4;
    data.push_back(n1);
    // cout << n1 << " ";
    solve(i + 1, n1, data);

    int n2 = num * 10 + 7;
    data.push_back(n2);
    // cout << n2 << " ";

    solve(i + 1, n2,  data);

}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    
        int n;
        cin >> n;
        vector<int> data;
        solve(0,0, data);
        sort(data.begin(), data.end());
        // for(auto e : data)
            // cout << e << " ";
        cout << lower_bound(data.begin(), data.end(), n) - data.begin() + 1 << endl;
        return 0;
}