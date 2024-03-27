#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n;
    cin >> n;
    int k;
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> k;
        sum += k;
    }
    int ans = 0;
    n++;
    for (int i = 0; i < 5; i++)
    {
        
        if ((sum + i)% n != 0)
            ans++;
    }

    cout << ans << endl;
    return 0;
}