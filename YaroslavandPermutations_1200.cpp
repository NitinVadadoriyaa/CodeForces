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
    int a[1001];
    memset(a, 0, sizeof(a));
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a[num]++;
        maxi = max(maxi, a[num]);
    }
    // cout << maxi << endl;
    // cout << n - maxi << endl;
    // sort(a, a + 1001,greater());
    if (maxi - 1 > (n - maxi)) {
        cout << "NO" << endl;
        return 0;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}