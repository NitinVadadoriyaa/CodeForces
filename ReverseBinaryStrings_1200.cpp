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
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {

            if (s[i] == s[i - 1])
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (s[j] != s[i])
                    {
                        if (j + 1 < n && s[j] == s[j + 1])
                        {
                            reverse(s.begin() + i, s.begin() + i + (j - i) + 1);
                            // cout << s << endl;
                            ans++;
                            break;
                        }
                        else if (j + 1 == n)
                        {
                            reverse(s.begin() + i, s.begin() + i + (j - i) + 1);
                            ans++;
                            break;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}