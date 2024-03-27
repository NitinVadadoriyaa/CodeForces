#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif

    int n;
    cin >> n;
    int sum_a = 0, sum_b = 0;
    bool isOddEvenPair = false;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if ((x % 2 + y % 2) == 1) {
            isOddEvenPair = true;
        }
        sum_a += x;
        sum_b += y;
    }

    if ((sum_a % 2 + sum_b % 2) == 0)
        cout << 0 << endl;
    else if ((sum_a %2 + sum_b % 2) == 2 && isOddEvenPair)
        cout << 1 << endl;
    else
        cout << -1 << endl;
    return 0;
}