#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
void s2(set<string> &h) {
        string ans = "";
    for (char c = 'a'; c <= 'z'; c++) {
        ans.push_back(c);
        for (char cc = 'a'; cc <= 'z'; cc++)
        {
            ans.push_back(cc);
            h.insert(ans);
            ans.pop_back();
        }
        ans.pop_back();
    }
}

void s3(set<string> &h) {
        string ans = "";
    for (char c = 'a'; c <= 'z'; c++) {
        ans.push_back(c);
        for (char cc = 'a'; cc <= 'z'; cc++)
        {
                ans.push_back(cc);
             for (char ccc = 'a'; ccc <= 'z'; ccc++) {

                ans.push_back(ccc);
                h.insert(ans);
                ans.pop_back();
             }
                ans.pop_back();

        }
        ans.pop_back();
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
        string s;
        cin >> s;
        set<char> h1;
        for (auto c = 'a'; c <= 'z'; c++)
            h1.insert(c);
        for (int i = 0; i < n; i++)
        {
            if (h1.find(s[i]) != h1.end()) {
                h1.erase(s[i]);
            }
        }
        if (h1.size()) {
            set<char>::iterator it = h1.begin();
            cout << *it << endl;
        } else {
            set<string> h2;
            s2(h2);
            for (int i = 0; i < n - 1; i++) {
                string temp = s.substr(i, 2);
                if (h2.find(temp) != h2.end()) {
                    h2.erase(temp);
                }
            }
            if (h2.size()){
                set<string>::iterator it = h2.begin();
                cout << *it << endl;
            } else {
                s3(h2);
                for (int i = 0; i < n - 2; i++) {
                    string temp = s.substr(i, 3);
                    if (h2.find(temp) != h2.end()) {
                        h2.erase(temp);
                    }
                }
                set<string>::iterator it = h2.begin();
                cout << *it << endl;
            }
        }

            t--;
    }
    return 0;
}