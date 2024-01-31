#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ctrl + space to run exsiting file.

bool comp(pair<int,int>&a, pair<int,int>&b) {
    if (a.second > b.second)
        return true;
    if (a.second == b.second)
        return a.first < b.first;
    return false;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> data(n);
    for (int i = 0; i < n; i++) {
        cin >> data[i].first; 
        cin >> data[i].second; 
    }
    sort(data.begin(), data.end(), comp);
    bool vis[n];
    int die = 0;
    memset(vis, false, sizeof(vis));
    while (die < n) {
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == false && data[i].first < s) {
                s += data[i].second;
                vis[i] = true;
                check = true;
                die++;
            }
        }
        if (check == false) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}