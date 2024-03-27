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
    while (t   ) {
        int n;
        cin >> n;
            int sum = 0;
        for (int i = 1; i <= n; i++) {
            int num = i;
            int temp = 0;
            cout << num;
            while (num)
            {
                temp += num % 10;
                num = num / 10;
            }
            
            sum += temp;
            cout << "-->" << temp << endl;
        
        }
        cout << sum << endl;
        t--;
    }
    return 0;
}