#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.

bool isP(string &s,int &n) {
    int i = 0, j = n - 1;
    while (i < j) {
        while (i < j) {
            if (s[i] != '*')
                break;
            i++;
        }
        if (i == j) {
                return true;
        } 
        while (j > i) {
            if (s[j] != '*')
                break;
            j--;
        }
        if (i == j)
            return true;

        if (s[i] != s[j])
            return false;

        i++;
        j--;
    }

    return true;
}
int odd(unordered_map<char,int>& h) {
    int o = 0;
    for (auto it : h) {
        if ((it.second > 0) && it.second % 2)
            o++;
    }

    return o;
}

int even(unordered_map<char,int>& h) {
    int o = 0;
    for (auto it : h) {
        if ((it.second > 0) && it.second % 2 == 0)
            o++;
    }

    return o;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif

    string str;
    cin >> str;
    unordered_map<char, int> h;
    for (char &c : str)
        h[c]++;

    int n = str.size();
    bool f = false;

   

    while (true) {

        int o = odd(h);
        // cout << o << endl;
        if (o == 0 || o == 1)
        {
            if (f == false) cout << "First" << endl;
            if (f == true) cout << "Second" << endl;
            return 0;
        }

        int e = even(h);
        // cout << e << endl;
        if (e)
        {
            for (auto it : h)
            {
                if ((it.second > 0) && it.second % 2 == 0){
                    h[it.first]--;
                    break;
                }
             }
        }
        else
        {
            for (auto it : h) {
                if ((it.second > 0) && it.second % 2){
                    h[it.first]--;
                    break;
                }
             }
        }

        f = !f;
    }
    return 0;
}