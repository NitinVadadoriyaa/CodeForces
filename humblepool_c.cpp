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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            a[i] = num;
            // cout << a[i].to_ulong() << endl;
        }

        int i = 0, j = n - 1;
        int maxi = max(a[0], a[j]);
        while(i <= j) {
            if ((a[i] & maxi) == maxi){
                i++;
            } else if ((a[j] & maxi) == maxi)
                j--;
            else
                break;
        }
        cout << j - i + 1 << endl;
        t--;
    }
    return 0;
}