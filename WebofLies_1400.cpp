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
    int n, m;
    cin >> n >> m;
    vector<int> infoOfNobel(n + 1, 0);
    int ans = n;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u > v) {
            infoOfNobel[v]++;
            if (infoOfNobel[v] == 1) {
                ans--;
            }
        }
        else
        {
            infoOfNobel[u]++;
            if (infoOfNobel[u] == 1) {
                ans--;
            }
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int type, u, v;
        cin >> type;
        if (type == 3) {
            cout << ans << endl;
        } else if (type == 1) {
            //add new edge
            cin >> u >> v;
            if (u > v)
            {
                infoOfNobel[v]++;
                if (infoOfNobel[v] == 1) {
                    ans--;
                }
            }
            else
            {
                infoOfNobel[u]++;
                if (infoOfNobel[u] == 1) {
                    ans--;
                }
            }
        }
        else
        {
            // remove existing edge
            cin >> u >> v;
             if (u > v) {
                infoOfNobel[v]--;
                if (infoOfNobel[v] == 0) {
                    ans++;
                }
            }
            else
            {
                infoOfNobel[u]--;
                if (infoOfNobel[u] == 0) {
                    ans++;
                }
            }
        }
    }
        return 0;
}