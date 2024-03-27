#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t,sx,sy,ex,ey;
    cin >> t >> sx >> sy >> ex >> ey;
    int n = 0, e = 0,s = 0,w = 0; // N E S W
    if (sx - ex <= 0) {
        e = ex - sx;
    } else {
        w = sx - ex;
    }
    if (sy - ey <= 0) {
        n = ey - sy;
    } else {
        s = sy - ey;
    }
    
    int ne = 1;
    while (ne <= t)
    {
        char c;
        cin >> c;
        if (c == 'S') {
            if (s > 0) s--;
        }
        else if (c == 'E')
        {
            if (e > 0) e--;
        }
        else if (c == 'W')
        {
            if (w > 0) w--; 
        }
        else
        {
            if (n > 0) n--;
        }

        if (n == 0 && e == 0 && s == 0 && w == 0) {
            cout << ne << endl;
            return 0;
        }
        ne++;
    }
    cout << -1 << endl;
    return 0;
}