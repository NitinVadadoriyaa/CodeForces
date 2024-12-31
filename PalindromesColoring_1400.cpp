/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.
bool check(int couple,int single,int length,int k) {
    if (length % 2) { // odd
        single -= k;
        if (single < 0) {
            couple += single;
            couple = couple - couple % 2;
            if (couple >= (k * (length - 1))) {
                return true;
            } else
                return false;
        } else {
            if (couple >= (k * (length - 1))) {
                return true;
            } else
                return false;
        }
    }
    
    if (couple >= (k * (length))) {
                return true;
    } 
    return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    while (t) {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[s[i]]++;
        }
        int couple = 0, single = 0;
        for (auto it : freq)
        {
            couple += (it.second - it.second % 2);
            single += (it.second % 2);
        }

        for (int ans = (n / k); ans >= 1; ans--) {
            if (check(couple,single,ans,k)) {
                cout << ans << endl;
                break;
            }
        }
            t--;
    }
    return 0;
}