/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.
void find(string &s,int n,int &ans) {
    for (int i = 1; i < n; i++) {
        if (s[i] == 'a' && s[i-1] == 'a') {
            ans = 2;
            break;
        }
    }

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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int i = 0, j = 0;
        int ans = INT_MAX;
        vector<int> fre(3, 0);
        while (j < n)
        {
            fre[str[j] - 'a']++;
                        // cout << j;
            if (fre[0] > fre[1] && fre[0] > fre[2]) {
                if ((j - i + 1) >= 2) {
                     while((j - i + 1) >= 2 && (fre[0] > fre[1] && fre[0] > fre[2])) {
                        ans = min(ans, j - i + 1);
                        fre[str[i] - 'a']--;
                        i++;
                    }
                }
            } else {
                // while((j - i + 1) > 3) {
                //     fre[str[i] - 'a']--;
                //     i++;
                //     if (fre[0] > fre[1] && fre[0] > fre[2]) {
                //         ans = min(ans, j - i + 1);
                //     }
                // }
            }
            j++;
        }
        while((j - i) >= 2) {
                    fre[str[i] - 'a']--;
                    i++;
                    if ((fre[0] > fre[1] && fre[0] > fre[2]) && ((j-i + 1) >= 2)) {
                        ans = min(ans, j - i + 1);
                    }
        }
        find(str, n, ans);
        cout << ((ans == INT_MAX) ? (-1) : (ans)) << endl;
        t--;
    }
    return 0;
}