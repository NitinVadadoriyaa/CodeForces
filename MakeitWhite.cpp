
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
        string str;
        cin >> str;
        bool first = false, second = false;
        int first_int, se_i;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B') {
                if (first == false){
                    first = true;
                    first_int = i;
                }
                else if (second == false) {
                    second = true;
                    se_i = i;
                }
                else  se_i = i;
            }
        }
        if (second == false) {
            cout << 1 << endl;
        } else {
            cout << se_i - first_int + 1 << endl;
        }
            t--;
    }
    return 0;
}