#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n, m , d;
    cin >> n >> m >> d;
    vector<int> arr(n * m);
    n = n * m;
    for (int i = 0; i < (n); i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[j] - arr[i]) % d != 0) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    int mid = (n - 1) / 2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != mid) {
            ans += (abs(arr[mid] - arr[i]) / d);
        }
    }

    cout << ans << endl;
    return 0;
}