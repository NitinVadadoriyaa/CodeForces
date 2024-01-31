#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif

    int n, m;
    cin >> n >> m;
    int arr[n];
    int maxi = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = ceil(arr[i] / (m + 0.0)); // how much round he stand
        if (maxi <= arr[i]) { // <= for tie break;
            maxi = arr[i];
            ans = i;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}