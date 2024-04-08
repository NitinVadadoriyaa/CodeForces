
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
        int n = 10;
        string str;
        cin >> str;
        int ans = 10;
        for (int i = 9; i > 0; i--) {
            //odd :
            int cnt = 0;
            int j = i + 1;
            while(j <= 10) {
                if (j % 2)
                    cnt++;
                j++;
            }
            int opposite = 0;
            for (j = 1; j <= i; j++)
            {
                if (j % 2) {
                    if (str[j-1] == '1')
                        cnt++;
                } else {
                    if (str[j-1] == '1' || str[j-1] == '?')
                        opposite++;
                }
            }
            if (cnt < opposite)
                ans = i;

            // even :
            cnt = 0;
            j = i + 1;
            while(j <= 10) {
                if (j % 2 == 0)
                    cnt++;
                j++;
            }
            opposite = 0;
            for (j = 1; j <= i; j++)
            {
                if (j % 2 == 0) {
                    if (str[j-1] == '1')
                        cnt++;
                } else {
                    if (str[j-1] == '1' || str[j-1] == '?')
                        opposite++;
                }
            }
            if (cnt < opposite)
                ans = i;
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}