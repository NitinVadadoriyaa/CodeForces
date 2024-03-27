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
        int f_mini = INT_MAX;
        int s_mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (f_mini > a[i]) {
                s_mini = f_mini;
                f_mini = a[i];
            } else if (s_mini > a[i] && a[i] != f_mini)
                s_mini = a[i];
        }
        // cout << f_mini << " " << s_mini << endl;
        if (s_mini == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            int maxx = abs(f_mini - s_mini);
            while(maxx) {
                // cout << maxx << endl;
                bool s = true;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] != f_mini) {
                        if ((abs(a[i] - f_mini)) % maxx) {
                            s = false;
                            break;
                        }
                    }
                }
                if (s) {
                    break;
                }
                maxx--;
            }
            cout << maxx << endl;
        }
            t--;
    }
    return 0;
}