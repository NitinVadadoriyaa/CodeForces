/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.
class DisjointSet {
    vector<int>size,parent;
public:
    DisjointSet(int n){//n = number of nodes
        size.resize(n+1);//intialy all node have 1 size(it self)
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i] = i;//intialy all node have it self parent
            size[i]=1;
        }
    }
    
    int findUltimateParent(int node){
        if(node == parent[node]) //base case 
            return node;
        return parent[node] = findUltimateParent(parent[node]);
        //store only ultimate parent
    }
    
    void unionBySize(int v,int u){
        int ulp_u = findUltimateParent(u);
        int ulp_v = findUltimateParent(v);
        if(ulp_u == ulp_v) return; //both are present in same componets
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    DisjointSet d1(n), d2(n);
    for (int i = 0; i < m1; i++) {
        int u, v;
        cin >> u >> v;
        d1.unionBySize(u, v);
    }
    for (int i = 0; i < m2; i++) {
        int u, v;
        cin >> u >> v;
        d2.unionBySize(u, v);
    }

    int ans = 0;
    vector<pp> nodesAns;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int u = i, v = j;
            if (d1.findUltimateParent(u) != d1.findUltimateParent(v) && d2.findUltimateParent(u) != d2.findUltimateParent(v)) {
                d1.unionBySize(u, v);
                d2.unionBySize(u, v);
                ans++;
                nodesAns.push_back({u, v});
            }
        }
    }
    cout << ans << endl;
    for (auto &it : nodesAns)
        cout << it.first << " " << it.second << endl;

    return 0;
}