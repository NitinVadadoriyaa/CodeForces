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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, vector<int>> freq;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]].push_back(i);

        }

        priority_queue<pair<int, int>> maxH;
        int i = 1;
        while (maxH.size() < k)
        {
            maxH.push({0, i});
            i++;
        }
        vector<int> ans(n,0);
        int sum = 0;
        for (auto it : freq) {
            while (it.second.size() > k) {
                it.second.pop_back();
            }
            // cout << it.first << " " << it.second.size() << endl;
            int siz = it.second.size();
            sum = sum  + siz;
        }

        int grpSize = sum / k;

        for (auto it : freq)
        {
            
            while (it.second.size() > 0)
            {
                if (maxH.top().first == -(grpSize))
                    break;
                ans[it.second.back()] = maxH.top().second;
                pp p = maxH.top();
                // cout << p.first << " " << p.second << endl;
                maxH.pop();
                p.first--;
                maxH.push(p);
                it.second.pop_back();
            }
        }

        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;

        t--;
    }
    return 0;
}