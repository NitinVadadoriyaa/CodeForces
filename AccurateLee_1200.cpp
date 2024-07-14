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
        typedef pair<char, bool> pp;
        stack<pp> stk;

        int i = 0;
        while (i < n) {
            if (stk.size() == 0) {
                stk.push({s[i], false});
            i++;
            } else {
                if (s[i] == '1') {
                    stk.push({'1', false});
                    i++;
                }
                else {
                    bool isChange = false;
                    while (stk.size() && stk.top().first == '1')
                    {
                        isChange = true;
                        stk.pop();
                    }
                    if (isChange) {
                        while(i < n && s[i] == '0') {
                            i++;
                        }
                        stk.push({'1', true});
                       
                    }
                    else
                    {
                        stk.push({'0', false});
                        i++;
                    }
                }
            }
        }

        string ans(stk.size(),'1');
        for (int i = stk.size() - 1; i >= 0; i--) {
            pp p = stk.top();
            stk.pop();
            if (p.second)
                ans[i] = '0';
            else
                ans[i] = p.first;
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}