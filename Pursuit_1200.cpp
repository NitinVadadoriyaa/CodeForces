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
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        int sum_a = 0, sum_b = 0;
        a[0] = b[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            sum_b += b[i];

        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 2; i <= n; i++)
        {
            
            b[i] += b[i-1];
            a[i] += a[i-1];

        }

        int p = n / 4;
            sum_a -= a[p];
            sum_b -= b[p];
        
        if (sum_a >= sum_b) {
            cout << 0 << endl;
        } else {
            int ini = n;
            sum_a = a[n];
            sum_b = b[n];
            while (true)
            {
                n++;
                sum_a += 100;
                a.push_back(100);
                if ((n - ini) < (n / 4)) {
                    if((sum_a - a[n / 4]) >= (sum_b - b[((n / 4) - (n - ini))])) {
                        cout << n - ini << endl;
                        break;
                    }
                }
                if ((sum_a - a[n / 4]) >= sum_b)
                {
                    cout << n - ini << endl;
                    break;
                }
            }
        }

            t--;
    }
    return 0;
}