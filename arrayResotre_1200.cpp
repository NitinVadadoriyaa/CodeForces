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
    int t,n,x,y;
    cin >> t ;
    while (t)
    {
        cin >> n >> x >> y;
        // int ansDiff = n - 2;
        int diff = y - x;
        int ansDiff = diff;
        for (int redif = 1; redif < diff; redif++)
        {
            if ((diff % redif) == 0 ) {
                if ((diff / redif) + 1 <= n)
                    {ansDiff = redif;
                break;}
            }
        }
        // cout << ansDiff << endl;
        vector<int> ans;
        ans.push_back(x);
        ans.push_back(y);
        n = n - 2;
        for (int i = x + ansDiff; ((i < y) && n); i += ansDiff) {
            ans.push_back(i);
                n--;
        }
            for (int i = x - ansDiff; (i > 0 && n); i = i - ansDiff)
            {
                ans.push_back(i);
                n--;
            }
    for (int j = y + ansDiff; (n); j = j + ansDiff) {
        ans.push_back(j);
        n--;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (ans.size() - i != 1)
            cout << " ";
    }
    cout << endl;

    t--;
    }
    return 0;
}