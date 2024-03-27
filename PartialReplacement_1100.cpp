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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int i = 0;
        int ans = 1;
        while(i < n && s[i] == '.')
            i++;
        s[i] = 'X';
        int j = i + 1;
        while (i < n && j < n)
        {
            if (s[j] == '*') {
                    if (j-i > k) {
                        j--;
                        while (j > i && s[j] == '.')
                            j--;
                        s[j] = 'X';
                        ans++;
                        i = j;
                    } else {
                        j++;
                    }
                }
             else
                j++;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '*') {
                ans++;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}