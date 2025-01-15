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
        int n;
        cin >> n;
        set<pp> minSet;
        set<pp,greater<pp>> maxSet;
        for (int i = 1; i <= n; i++)
        {
            int sociality;
            cin >> sociality;
            if (sociality == 0) continue;
            minSet.insert({sociality,i});
            maxSet.insert({sociality,i});
        }
        int ans = 0;
        vector<pp> meetAns;
        while (minSet.size() > 1) // O(N / 2)
        {
            pp mini = *(minSet.begin());
            pp maxi = *(maxSet.begin());
            minSet.erase(minSet.begin());// logN
            maxSet.erase(maxSet.begin());// logN
            minSet.erase(minSet.find(maxi));// logN
            maxSet.erase(maxSet.find(mini)); // logN
            meetAns.push_back({mini.second, maxi.second});
            mini.first--;
            maxi.first--;
            if (mini.first != 0) {
                minSet.insert(mini);
                maxSet.insert(mini);
            }
            if (maxi.first != 0) {
                minSet.insert(maxi);
                maxSet.insert(maxi);
            }
            ans++;
        }

        cout << ans << endl;
        for (auto &it : meetAns) {
            cout << it.first << " " << it.second << endl;
        }
        t--;
    }
    return 0;
}