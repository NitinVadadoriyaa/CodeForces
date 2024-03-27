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
    vector<int> left(n,0), right(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i != 0) {
            left[i] = left[i - 1];
            if (a[i])
                left[i]++;
        }
        else if (a[i] == 1)
            left[0] = 1;
    }
    right[n - 1] = (a[n - 1]) ? 1 : 0;

    for (int i = n - 2; i >= 0; i--){
        right[i] = right[i + 1] + a[i];
    }
    if (right[0] == n) {
        cout << n - 1 << endl;
        return 0;
    }

    int z = 0, o = 0;
    int i = 0, j = 0;
    int ans = 0;
    while (j < n)
    {
        if (a[j] == 0)
        {
            z++;
        }
        else
        {
            o++;
        }
        // cout << z << " " << o << endl;
            int res = (i - 1 >= 0) ? left[i - 1] : 0;

            res += z;
            res += (j + 1 < n) ? right[j + 1] : 0;
            ans = max(ans, res);

        while (o > z) {
            // cout << i << endl; 
            if (a[i] == 0)
                z--;
            else
                o--;
            i++;
        }
    j++;
    }

    int res = (i - 1 >= 0) ? left[i - 1] : 0;
    // cout << z - o << endl;
    res += z - o;
    res += (j + 1 < n) ? right[j + 1] : 0;
    ans = max(ans, res);
    
    cout << ans << endl;
    return 0;
}