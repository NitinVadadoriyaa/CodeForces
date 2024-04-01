#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
void solve(int n,int m,int x,int y,int &cnt,unordered_map<int, bool> &vis) {
    if (x <= 0 || y <= 0 || x > n || y > m)
        return;

    if (vis.find(x * m + y) != vis.end())
        return;
    vis[x * m + y] = true;

    cout << x << " " << y << endl;
    cnt--;
    if (cnt == 0)
        return;
    solve(n, m, x, y - 1, cnt,vis);
    if (cnt == 0)
        return;
    solve(n, m, x-1, y, cnt,vis);
    if (cnt == 0)
        return;
    solve(n, m, x + 1, y , cnt,vis);
    if (cnt == 0)
        return;
    solve(n, m, x, y + 1, cnt,vis);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int cnt = n * m;
    unordered_map<int, bool> vis;
    solve(n, m, x, y, cnt, vis);
    return 0;
}