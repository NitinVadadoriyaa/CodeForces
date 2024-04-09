#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
bool solve(string &a,string &s,int i,int j,string &ans) {
   

    if (i < 0 and j < 0)
        return true;
    else if ((i >= 0 and j < 0))
        return false;
    else if (i < 0 and j >= 0) {
        int a_d = 0;
        int s_d = s[j] - '0';
        if (a_d <= s_d) {
            ans.push_back((s_d - a_d) + '0');
            if (solve(a, s, i - 1, j - 1, ans))
                return true;
            ans.pop_back();
        }

    }

    int a_d = a[i] - '0';
    int s_d = s[j] - '0';
    if (a_d < s_d) {
        ans.push_back((s_d - a_d) + '0');
        if (solve(a, s, i - 1, j - 1, ans))
            return true;
        ans.pop_back();
    }
    else if (a_d == s_d)
    {
     ans.push_back('0');
        if (solve(a, s, i - 1, j - 1, ans))
            return true;
        ans.pop_back();   
    }
    else
    {
        if (j-1 >= 0) {
            int num = stoi(s.substr(j - 1, 2));
            if (num <= 18 && num > a_d) {
                ans.push_back((num - a_d) + '0');
                if (solve(a, s, i - 1, j - 2, ans))
                    return true;
                ans.pop_back();
                
            }
        }
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
        ll a,s;
        cin >> a >>s;
        string s_a, s_s;
        while(a) {
            int d = a % 10;
            a = a / 10;
            s_a.push_back(d + '0');
        }
        while(s) {
            int d = s % 10;
            s = s / 10;
            s_s.push_back(d + '0');
        }
        reverse(s_a.begin(), s_a.end());
        reverse(s_s.begin(), s_s.end());
        // while (s_a.size() < s_s.size()) {
        //     s_a = "0" + s_a;
        // }
        // cout << s_a << " " << s_s << endl;
        string ans_s;
        int ans = solve(s_a, s_s, s_a.size() - 1, s_s.size() - 1, ans_s);
        if (ans == false)
        cout << -1 << endl;
        else {
            while(ans_s.size() && ans_s[ans_s.size() - 1] == '0')
                ans_s.pop_back();
            reverse(ans_s.begin(), ans_s.end());
            cout << ans_s << endl;
        }
        t--;
    }
    return 0;
}