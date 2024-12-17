/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.

int check(unordered_map<int, vector<int>> &freq,int k) {
    int sum = 0;       
        for (auto it : freq) {

            int siz = it.second.size();
            sum = sum + min(siz, k);
        }

        return (sum / k) * k;
}
void work(int k,unordered_map<int, vector<int>> &freq,int n) {
    priority_queue<pair<int, int>> maxH;
        int i = 1;
        while (maxH.size() < k)
        {
            maxH.push({0, i});
            i++;
        }
        vector<int> ans(n,0);
        for (auto it : freq) {
            if (it.second.size() > k) {
                while(it.second.size() > k) {
                    ans[it.second.back()] = 0;
                    it.second.pop_back();
                }
            }
            
            while (it.second.size() > 0)
            {
                if (maxH.top().first == -(n / k))
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
        vector<int> a(n);
        unordered_map<int, vector<int>> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]].push_back(i);

        }

        int ans = 1;
        int paintS = 0;
        int l = 1, r = k;
        while ( l <= r) {
            int mid = l + (r - l) / 2;

            int res = check(freq, mid);
            if (paintS < res) {
                paintS = res;
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
            // cout << ans <<
        }

        work(ans, freq, n);
        t--;
    }
    return 0;
}