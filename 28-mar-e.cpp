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
        bool pa = false;
        for (int dif = 1; dif + dif <= n; dif++)
        {
            if (n % dif == 0) {
                bool ist = false;
                bool f = true;
                for (int ii = 0; ii < dif; ii++)
                {
                    unordered_map<char,int>m;
                    for (int i = ii; i < n; i += dif) {
                        m[s[i]]++;
                        if (ist && m.size() > 1) {
                            f = false;
                            break;
                        }
                        
                    }
                    if (f == false)
                        break;

                    if (m.size() > 1)
                            ist = true;
                    if (m.size() >= 2) {
                        int cnt = 0;
                        for (auto ch : m)
                        {
                            if (ch.second > 1)
                                cnt++;
                            if (cnt > 1) {
                                f = false;
                            break;
                            }
                        }
                       
                    }
                    if (f == false)
                        break;
                }

                if (f) {
                    cout << dif << endl;
                    pa = true;
                    break;
                }
            }
        }
        if (pa == false) cout << n << endl;
        t--;
    }
    return 0;
}