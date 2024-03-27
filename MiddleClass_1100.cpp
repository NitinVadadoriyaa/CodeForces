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
        double n,x;
        cin >> n >> x;
        vector<int> a((int)n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());
        double money = sum / n;
       
        if (money >= x)
        {
            cout << (int)n << endl;
        }
        else
        {
            bool f = false;
            for (int i = 0; i < n; i++)
            {
                sum -= a[i];
                double money = sum / (n - i - 1.0);
                if (money >= x) {
                    cout << (int)(n - i - 1) << endl;
                    f = true;
                    break;
                }
            }
            if (f == false)
                cout << 0 << endl;
        }
        t--;
    }
    return 0;
}