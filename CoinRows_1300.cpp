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
        int m;
        cin >> m;
        vector<int> firstRow(m),secondRow(m);
        vector<int> prefixFirst(m, 0),prefixSecond(m,0);

        for (int i = 0; i < m; i++)
        {
            cin >> firstRow[i];
        }
        for (int i = 0; i < m; i++) 
        {
            cin >> secondRow[i];
        }
        for (int i = 0; i < m; i++) { // prefixFirst for second row
            prefixFirst[i] = (i != 0) ? (prefixFirst[i - 1] + secondRow[i]) : (secondRow[i]);
        }
        for (int i = m - 1; i >= 0; i--) // prefixSecond for first row
        {
            prefixSecond[i] = (i != m - 1) ? (prefixSecond[i + 1] + firstRow[i]) : (firstRow[i]);
        }

        int ans = INT_MAX;
        for (int i = 0; i < m; i++) 
        {
            int leftDow = (i - 1 >= 0) ? prefixFirst[i - 1] : INT_MAX;
            int rightUp = (i + 1 < m) ? prefixSecond[i + 1] : INT_MAX;
            if (leftDow == INT_MAX) {
                leftDow = 0;
            }
            if (rightUp == INT_MAX) {
                rightUp = (leftDow == 0) ? INT_MAX : 0;
            }
            ans = min(ans, max(leftDow, rightUp));
            // cout << ans << endl;
        }

        cout << ((ans == INT_MAX) ? 0 : ans) << endl;
//helo
        t--;
    }
    return 0;
}