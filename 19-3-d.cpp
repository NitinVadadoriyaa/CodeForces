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
    int t;
    cin >> t;
    while (t) {
       ll a,b,c;
       cin >> a >> b >> c;
       ll aa = a + c;
       ll ans1 = 0;
       ans1 = aa / a;
       ll ans2 = (b + c) / b;
       
       if (((a + c) < b) || ((b + c) < a)) {
            cout << max(ans1,ans2) << endl;
       } else {
           cout << ans1 + ans2 << endl;
       }
           t--;
    }
    return 0;
}