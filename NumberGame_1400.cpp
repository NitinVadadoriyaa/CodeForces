/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

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
        int n;
        cin >> n;
        string ans = "FastestFinger";
        if ((n != 1 && n % 2) or n == 2) {
            ans = "Ashishgup";
        }
        else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i)
                    continue;
                int fac1 = n / i;
                int fac2 = i;
                if (fac1 % 2 == 0 && fac2 % 2 != 0) {
                    if (fac1 != 2) {
                        ans = "Ashishgup";
                    }
                } else if (fac1 % 2 != 0 && fac2 % 2 == 0) {
                    if (fac2 != 2) {
                        ans = "Ashishgup";
                    }
                }
            }
        }
        cout << ans << endl;

        t--;
    }
    return 0;
}