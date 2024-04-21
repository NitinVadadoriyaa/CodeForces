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
        string a, b;
        bool isMax = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0') {
                if (i == 0) {
                    a.push_back('2');
                    b.push_back('1');
                    isMax = true;
                }
                else
                {
                   
                        a.push_back('0');
                        b.push_back('0');   
                   
                }
            } else if (s[i] == '1') {
                if (i == 0) {
                    a.push_back('2');
                    b.push_back('2');
                } else {
                    if(isMax) {
                        a.push_back('0');
                        b.push_back('1');
                    } else {
                        isMax = true;
                        a.push_back('1');
                        b.push_back('0');
                    }
                }
            } else {
                if (i == 0) {
                    a.push_back('1');
                    b.push_back('1');
                } else {
                    if(isMax) {
                        a.push_back('0');
                    b.push_back('2');
                    } else {
                        a.push_back('1');
                    b.push_back('1');
                    }
                }
            }
        }
        cout << a << endl
             << b << endl;
        t--;
    }
    return 0;
}