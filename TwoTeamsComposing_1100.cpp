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
        if (n == 1) {
            int temp;
            cin >> temp;
            cout << 0 << endl;
        } else {
            unordered_map<int, int> freq;
            unordered_map<int, int> mp;
            int maxi = 0;
            for (int i = 0; i < n; i++)
            {
                int num;
                cin >> num;
                freq[num]++;
                maxi = max(maxi, freq[num]);
            }
            for(auto it : freq)
                mp[it.second]++;

            for (int i = maxi; i > 0; i--)
            {
                int ava = freq.size();
                if (mp[i] >= 1 && i == maxi) {
                    ava--;
                }

                if (ava >= i) {
                    cout << i << endl;
                    break;
                }
            }
        }
            t--;
    }
    return 0;
}