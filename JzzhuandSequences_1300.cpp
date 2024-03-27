#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

//ctrl + space to run exsiting file.
int solve(int fn, int &f1,int &f2) {
    if (fn == 1)
        return f1;
    if (fn == 2)
        return f2;
    int res = (solve(fn - 1, f1, f2) - solve(fn - 2, f1, f2));
    if (res < 0) {
        res = MOD - ((res * -1) % MOD);
    } else {
        res = res % MOD;
    }
    return res;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    
    //f(x) = f(x - 1) - f(x - 2)

    int f1, f2,fn;
    cin >> f1 >> f2 >> fn;
    //int res = solve(fn, f1, f2);

    int ff0, ff1, ff2;
    ff0 = f1;
    ff1 = f2;
    ff2 = f2 - f1;
    fn--; // 0 - based indexing
    int que = fn / 3;
    int remin = fn % 3;
    int res;
    if (remin == 0)
        res = ff0;
    if (remin == 1)
        res = ff1;
    if (remin == 2)
        res = ff2;

    if (que % 2 != 0)
    {
        res = res * -1;
        if (res < 0)
            res = ((res % MOD) + MOD) % MOD;
        else
            res = res % MOD;
    }
    else
    {
        if (res < 0)
            res = ((res % MOD) + MOD) % MOD;
        else
            res = res % MOD;
    
    }
    cout << res << endl;
    return 0;
}