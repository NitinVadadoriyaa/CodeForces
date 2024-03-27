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
    int n;
    cin >> n;
    ll a = 1;
    while(n) {

        while (true) {
            ll temp = a;
            int sum = 0;
            while(temp) {
                sum += (temp % 10);
                temp /= 10;
            }
                if (sum == 10) {
                    // cout << a << endl;
                    break;
                }
                a++;
            }
            a++;
            n--;
    }
    cout << a-1 << endl;
    return 0;
}