#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

// ctrl + space to run exsiting file.

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
#endif

    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
            vector<int> a(n);
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
        // cout << n << " " << k << endl;
        if (k > 99 * (n-1))
        {
            cout << -1 << endl;
        }
    
        else
        {

            while (k > 0)
            {
                // cout << k << endl;
                bool f = false;
                for (int i = 0; i < n-1; i++)
                {
                
                    if (a[i] < a[i+1]) {
                            k -= 1;
                            if (k <= 0)
                            {
                                cout << i + 1 << endl;
                            }
                            f = true;
                            a[i] += 1;
                            break;
                        }
                    
                }
                if (f == false)
                {
                    if (k > 0)
                    {
                        cout << -1 << endl;
                        break;
                    }
                }
            }
        }

        t--;
    }
    return 0;
}