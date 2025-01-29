/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

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
        string s;
        cin >> s;

        int cost = s.size();
        //all ones or  all zeros
        int zeros = 0;
        int ones = 0;
        for (auto cha : s)
        {
            if (cha == '0')
                zeros++;
            else
                ones++;
        }
        cost = min(cost, min(zeros,ones));

        zeros = ones = 0;
        int n = s.size();
        vector<int> suffZero(n, 0), suffOne(n, 0);
        suffZero[n - 1] = (s.back() == '0') ? 1 : 0;
        suffOne[n - 1] = (s.back() == '1') ? 1 : 0;
        for (int j = n - 2; j >= 0; j--) {
            if (s[j] == '1') {
                suffOne[j] = suffOne[j+1] + 1;
                suffZero[j] = suffZero[j + 1];
            }
            else
            {
                suffOne[j] = suffOne[j + 1];
                suffZero[j] = suffZero[j + 1] + 1;
            }
            // cout << suffOne[j] << " ";
        }

        // some zeros followed by some ones [00..111]
        for (int i = 0; i < s.size(); i++)
        {

            
            if (s[i] == '1')
            {
                zeros++;
                cost = min(cost, zeros + suffZero[i]);
                cost = min(cost, ones + suffOne[i] - 1);
            }
            else
            {
                ones++;
                cost = min(cost, zeros + suffZero[i] - 1);
                cost = min(cost, ones + suffOne[i]);
            }
            // cout << cost << " ";
            // if (cost == 1) {
            //     cout << i << endl;
            //     break;
            // }
        }
            cout << cost << endl;
        t--;
    }
    return 0;
}