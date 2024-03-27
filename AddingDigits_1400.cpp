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
    long long a, b, n;
    cin >> a >> b >> n;
    bool f = false;
    long long num;
    for (int i = 0; i < 10; i++)
    {
        num = a;
        num = num * 10 + i;
        if (num % b == 0) {
            f = true;
            break;
        }
    }
    string ans = to_string(num);
    n--;
    if (f == false)
    {
        cout << -1 << endl;
        return 0;
    }

    if (num % 10 == 0) {
        while(n) {
            ans.push_back('0');
            n--;

        }
        cout << ans << endl;
        return 0;
    }
    if (b > 9) {
        if ((num*10) % b == 0 ) {
            while(n) {
            ans.push_back('0');
            n--;
        } 
        cout << ans << endl;
        return 0;   
        } else if (n == 0){
            cout << ans << endl;
            return 0;
        } else {
            cout << -1 << endl;
            return 0;
        }
    }
    while(n > 0) {
        ans += to_string(b);
        n--;
    }

    cout << ans << endl;
    return 0;
}