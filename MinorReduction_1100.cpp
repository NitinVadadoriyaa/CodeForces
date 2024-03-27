#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
char charr(int t) {
    if (t == 0)
        return '0';
     if (t == 1)
        return '1'; if (t == 2)
        return '2'; if (t == 3)
        return '3'; if (t == 4)
        return '4'; if (t == 5)
        return '5'; if (t == 6)
        return '6'; if (t == 7)
        return '7'; if (t == 8)
        return '8'; if (t == 9)
        return '9';
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    while (t)
    {
        int o = -1, tw = -1;
        string s;
        cin >> s;
        for (int i = 1; i < s.size();i++) {
            if ((s[i]-'0' + s[i-1]-'0') >= 10) {
                tw = i - 1;
            } else {
                if (o == -1)
                    o = i - 1;
            }
            
        }

        if (tw!=-1) {
            int sum = s[tw] - '0' + s[tw + 1] - '0';
            // cout << sum << endl;
            int seco = sum % 10;
            int fir = sum / 10;
            s[tw] = charr(fir);
            s[tw+1] = charr(seco);
        } else {
            s = s.substr(0, o) + charr(s[o] - '0' + s[o + 1] - '0') + s.substr(o + 2, s.size() - o + 2);
        }
        cout << s << endl;
        t--;
        /* code */
    }
    
    return 0;
}