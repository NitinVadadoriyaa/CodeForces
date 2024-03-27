#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.

int start(int a) {
   switch (a)
   {
   case 1:
       return 1;
   case 2:
       return 10;
   case 3:
       return 100;
    case 4:
        return 1000;
    case 5:
        return 10000;
    case 6:
        return 100000;
    case 7:
        return 1000000;
    case 8:
        return 10000000;
    case 9:
        return 100000000;
    default:
        return 1000000000;
    }
    return 0;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    vector<vector<vector<pair<int,int>>>> dp(10, vector<vector<pair<int,int>>>(10, vector<pair<int,int>>(10, {-1,-1})));

    int t;
    cin >> t;
    while(t) {
        int a, b, c;
        cin >> a >> b >> c;
        if (dp[a][b][c].first != -1) {
            cout << dp[a][b][c].first << " " << dp[a][b][c].second << endl;
        } else {

            int i = start(a);
            int j = start(b);
            int k = j;
            int p = start(b + 1);
            bool f = true;
            while (f)
            {
                k = j;
                while (k < p)
                {
                    int gcd = __gcd(i, k);
                    int num = gcd;
                    int cc = 0;
                    while(num) {
                        cc++;
                        num /= 10;
                    }
                    if (dp[a][b][cc].first == -1) {
                        dp[a][b][cc].first = i;
                        dp[a][b][cc].second = k;
                    }
                    if (cc == c) {
                        f = false;
                        break;
                    }
                    k++;
                }
                i++;
            }
            cout << dp[a][b][c].first << " " << dp[a][b][c].second << endl;
        }
        t--;
    }
    return 0;
}