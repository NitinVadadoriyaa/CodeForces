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
            if (k == 1 &&  (n % 2)) {
                    cout << "YES" << endl;
            }
            else if (k == 1 && ((n % 2) == 0)) {
                cout << "NO" << endl;
            }
            else if ((((n+k) % (ll)2) || n <= k)) {
                cout << "NO" << endl;
            } else {
                ll sum = 0;
                ll tem = k;
                for (int i = 1; tem > 0; tem-- ,i += 2)
                {
                    // cout << i << endl;
                    sum += i;
                    if (sum > n) {
                        // cout << i << endl;
                        break;
                    }
                }
                if (sum > n) {
                    cout << "NO" << endl;
                } else if ((n - sum) % 2 == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }

                t--;
        }
        return 0;
    }