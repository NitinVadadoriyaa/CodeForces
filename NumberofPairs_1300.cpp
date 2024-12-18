#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef long double ld;

//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif

    int t;
    cin >> t;
    while(t) {
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());

        // unordered_map<int, int> freq;
        ll lowerBoun = 0;
        ll i = 0, j = n - 1;
        // ai + aj < l
        while(i < j) {
            if (arr[i] + arr[j] < l) {
                lowerBoun += j - i;
                i++;
            } else
                j--;
        }
        i = 0, j = n - 1;
        // ai + aj > r
        while(i < j) {
            if (arr[i] + arr[j] > r) {
                lowerBoun += j - i;
                j--;
            } else
                i++;
        }

        cout << (n * (n - 1) / (ll)2) - lowerBoun << endl;
        t--;
    }
    return 0;
}