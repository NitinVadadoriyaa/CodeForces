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
        ll n,k;
        cin >> n >> k;
        ll h = 0;
        ll com = 1;
        while(com < n) {
            if(com > k)
                break;
            else
                com += com;
            h++;
        }
        // cout << h << endl;
        if (com >= n)
        {
            cout << h << endl;
        }
        else
        {
            ll remain = n - com;
            // cout << remain << endl;
            
            ll remainTime = ((remain / (k + (ll)0.0)));
            if (remain % k > 0)
                h++;
           
            cout << h + remainTime << endl;
        }
        t--;
    }
    return 0;
}