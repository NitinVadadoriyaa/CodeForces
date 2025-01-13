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
        vector<pp> a;
        vector<list<int>> adj(n+1);
        map<pp, int> indexMap;

        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            a.push_back({u, v});
            adj[u].push_back(v);
            adj[v].push_back(u);
          
            if (adj[u].size() > 2 or adj[v].size() >2) {
                flag = true;
            }
            indexMap[{u, v}] = i;
            indexMap[{v, u}] = i;
        }

        if (flag) {
            cout << -1;
        } else {
            unordered_map<int, int> value;
            vector<int> ans(n);
            queue<int> que;
            que.push(1);
            
            while (que.size())
            {
                int siz = que.size();
                while(siz) {
                
                    int node = que.front();
                    // cout << node << endl;
                    que.pop();
                    int leftCh = 0, rightCh = 0;
                    if (adj[node].size())
                    {
                        leftCh = adj[node].back();
                        adj[node].remove(leftCh);
                        adj[leftCh].remove(node);
                    }
                    if (adj[node].size()) {
                        rightCh = adj[node].back();
                        adj[node].remove(rightCh);
                        adj[rightCh].remove(node);
                    }

                    // cout << leftCh << " " << rightCh << endl;
                    if (node == 1) {
                        if (leftCh && rightCh) {
                            ans[indexMap[{node, leftCh}]] = 2;
                            ans[indexMap[{node, rightCh}]] = 3;
                            value[leftCh] = 2;
                            value[rightCh] = 3;
                            if (adj[rightCh].size())
                            {
                                que.push(rightCh);
                                
                            }
                         if (adj[leftCh].size()) {
                            // cout << leftCh << rightCh << endl;
                            que.push(leftCh);
                        }
                        siz--;
                        continue;
                        }
                    }
                    if (leftCh)
                    {
                        ans[indexMap[{node, leftCh}]] = (value[node] != 2) ? 2 : 3;
                        value[leftCh] = (value[node] != 2) ? 2 : 3;
                        if (adj[leftCh].size()) {
                            que.push(leftCh);
                        }
                    }
                    if (rightCh) {
                        ans[indexMap[{node, rightCh}]] = (value[node] != 2) ? 2 : 3;
                        value[rightCh] = (value[node] != 2) ? 2 : 3;

                        if (adj[rightCh].size())
                        {
                            que.push(rightCh);
                        }
                    }
                    siz--;
                }
                   
            }
        for (int i = 1; i < n; i++) {
            cout << ans[i] << " ";
        }
        }
            cout << endl;
        t--;
    }
    return 0;
}