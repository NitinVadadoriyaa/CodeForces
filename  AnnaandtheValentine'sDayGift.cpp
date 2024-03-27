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
        int n, m;
        cin >> n >> m;
        int num;
            long long z = 0;
            long long d = 0;
            vector<long long> a;
            for (int i = 0; i < n; i++)
            {
                z = 0;
                cin >> num;
                string s = to_string(num);
                int ii = s.size() - 1;
                for (ii; ii >= 0; ii--)
                {
                    if (s[ii] == '0')
                        z++;
                    else
                        break;
                }

                d += (ii + 1);
                if (z > 0) {
                    a.push_back(z);
                }
            }

        m++;
        if (d >= m) {
            cout << "Sasha" << endl;
        } else {
            sort(a.begin(), a.end(), greater<long long>());
            int i = 1;
            for (i; i < a.size(); i = i + 2)
            {
                d += a[i];
                if (d >= m) {
                    cout << "Sasha" << endl;
                    break;
                }
            }
            if (i >= a.size()) {
                 cout << "Anna" << endl;
            }
        }

        t--;
    }
    return 0;
}