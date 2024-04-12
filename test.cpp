#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7
string smallestEquivalentString(string s1, string s2, string base) {
        vector<int>db(26,-1);
        int n = s1.size();
        int m = base.size();
        int id = 0;
        // -1 not assign id till now
        for (int i = 0; i < n; i++) {
            if ((db[s1[i] - 'a'] == -1) && (db[s2[i] - 'a'] == -1)) {
                db[s1[i] - 'a'] = id;
                db[s2[i] - 'a'] = id;
                id++;
            } else if (db[s1[i] - 'a'] == -1) {
                db[s1[i] - 'a'] = db[s2[i] - 'a'];
            } else if (db[s2[i] - 'a'] == -1) {
                db[s2[i] - 'a'] = db[s1[i] - 'a'];
            } else {
                if (db[s1[i] - 'a'] != db[s2[i] - 'a']) {
                    for (int j = 0; j < 26; j++) {
                        if (db[j] == db[s1[i] - 'a']) {
                            db[j] = db[s2[i] - 'a'];
                        }
                    }
                }
            }
            // cout << db['j' - 'a'] << " " << db['h' - 'a'] << endl;
        }

        // for (int i = 0; i < 26; i++) {
        //     cout << db[i] << " " << char(i + 'a') << endl;
        // }
        string ans;
        for (int i = 0; i < m; i++) {
            id = db[base[i] - 'a'];
            for (int j = 0; j < 26; j++) {
                if (db[j] == id && id != -1) {
                    ans.push_back(j + 'a');
                    break;
                }
            }
            if (ans.size() == i) {
                ans.push_back(base[i]);
            }
        }
        return ans;
    }


//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif

    string s1, s2, b;
    cin >> s1 >> s2 >> b;
    cout << smallestEquivalentString(s1, s2, b) << endl;
    return 0;
}