#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


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
        // cin >> n;
        string str;
        cin >> str;
        n = str.size();
        int i = 0;
        int o = 0, tw = 0, th = 0;

        int ans = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == '1')
                o++;
            if (str[j] == '2')
                tw++;
            if (str[j] == '3')
                th++;

            while(o > 0 && tw > 0 && th > 0) {
                ans = min(ans, j - i + 1);
               if (str[i] == '1')
                o--;
            if (str[i] == '2')
                tw--;
            if (str[i] == '3')
                th--;
            i++;
            }
        }
        if (ans != INT_MAX)
        cout << ans << endl;
        else 
        cout << 0 << endl;
        t--;
    }
    return 0;
}