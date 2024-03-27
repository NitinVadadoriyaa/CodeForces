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
  
        int n;
        cin >> n;
        int q;
        cin >> q;
        string s;
        cin >> s;
        unordered_map<int, bool> h;
        for (int i = 0; i < n - 2; i++) {
            if (s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c') {
                h[i] = true;
                // cout << i << endl;
                i += 2;
            }
        }

        for (int i = 0; i < q;i++) {
            int ind;
            cin >> ind;
            ind--;
            char c;
            cin >> c;
            
            if (s[ind] == 'a')
            {
                if (ind+2 < n && s[ind+1] == 'b' && s[ind+2] == 'c') {
                    h.erase(ind);
                }
            }
            else if (s[ind] == 'b')
            {
                if (ind+1 < n && ind - 1 >= 0 && s[ind+1] == 'c' && s[ind-1] == 'a') {
                    h.erase(ind - 1);
                }
            }
            else
            {
                if (ind-2 >= 0 && s[ind-1] == 'b' && s[ind-2] == 'a') {
                    h.erase(ind - 2);
                }
            }

            s[ind] = c;
            if (c == 'a') {
                if (ind+2 < n && s[ind+1] == 'b' && s[ind+2] == 'c') {
                    h[ind] = true;
                }
            } else if (c == 'b') {
                 if (ind+1 < n && ind - 1 >= 0 && s[ind+1] == 'c' && s[ind-1] == 'a') {
                   h[ind-1] = true;
                }
            } else {
                 if (ind-2 >= 0 && s[ind-1] == 'b' && s[ind-2] == 'a') {
                    h[ind-2] = true;
                }
            }
            // cout << s << endl;
            cout << h.size() << endl;
        }

            return 0;
}