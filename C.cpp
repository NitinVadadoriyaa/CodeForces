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
        string s;
        cin >> s;
        string a = "map", b = "pie";
        int ans = 0;
        for (int i = 0; i < n - 2; i)
        {
            // cout << i << endl;
            if (s[i] == 'm')
            {
                bool f = true;
                for (int j = 1; j < 3; j++)
                {
                    if (a[j] != s[i+j]) {
                        f = false;
                        break;
                    }
                }
                    bool g = true;
                if (f) {    
                    if (i + 4 < n) {
                        for (int j = 0; j < 3; j++)
                            {
                                if (b[j] != s[i+2+j]) {
                                    g = false;
                                    break;
                                }
                            }
                    } else {
                        g = false;
                    }
                }
               
                if(f && g) {
                    i += 5;
                    ans++;
                    continue;
                } else if (f == true && g == false) {
                    i += 2;
                    ans++;
                    continue;
                }
            }
            else if (s[i] == 'p')
            {
                bool f = true;
                for (int j = 1; j < 3; j++){
                                if (b[j] != s[i+j]) {
                                    f = false;
                                    break;
                                }
                }
                if (f) {
                    ans++;
                    i += 2;
                    // cout << "in" << endl;
                    continue;
                }
            }
            i++;
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}