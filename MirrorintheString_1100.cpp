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
        int i = 0, j = 1, c = 0;
        if (n == 1 || (s[i] == s[j])) {
                if (n != 1){
                    cout << s.substr(0,2) << endl;
                } else {
                    cout << s << s << endl;
                }
                t--;
                continue;
        }
        while (i >= 0 && j < n)
        {
            
            if (s[i] == s[j])
            {
                i = j;
                c = i;
                j++;
            }
            else if (s[i] < s[j])
                break;
            else
            {
                i = j;
                c = i;
                j++;
            }
        }
            if ((j < n)) {
                cout << s.substr(0, c + 1);
                while(c >= 0)
                    cout << s[c--];
                cout << endl;
            } else if (j == n){
                cout << s;
                reverse(s.begin(), s.end());
                cout << s << endl;
            } else {
                cout << "Popat" << endl;
            }
            t--;
    }
    return 0;
}