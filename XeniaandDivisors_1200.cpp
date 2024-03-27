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
    vector<int> a(n);
    unordered_map<int, int> f;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
        f[a[i]]++;
        if (f[a[i]] > (n / 3)) {
            cout << -1 << endl;
            return 0;
        }
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < (n / 3); i++)
        {
            int f = a[i];
            int s = a[(n / 3) + i];
            int t = a[(2 * (n / 3)) + i];

            if (f == 1 && s == 2 && t == 4 || f == 1 && s == 2 && t == 6 || f == 1 && s == 3 && t == 6)
                continue;
            else {
                cout << -1 << endl;
                return 0;
            }
        }

        for (int i = 0; i < (n / 3); i++)
        {
            for (int j = i; j < n; j += (n / 3))
            {
                cout << a[j];
                if (j + (n / 3) < n)
                    cout << " ";
            }
            cout << endl;
        }

        return 0;
}