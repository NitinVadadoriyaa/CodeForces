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
    
        int s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        double a = pow( (s1 * s3) / s2,0.5);
        double b = pow( s1 * s2 / s3, 0.5);
        double c = pow( s2 * s3 / s1, 0.5);
        // cout << a << b << c << endl;
        cout << 4 * (a + b + c) << endl;
        return 0;
}