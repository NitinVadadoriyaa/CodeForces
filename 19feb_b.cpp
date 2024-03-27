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
    // cout << t;
    while (t)
    {
        int n;
        cin >> n;
        vector<string> a;

        for (int i = 0; i < n;i++) {
            string p;
            cin >> p;
            // cout << p << endl;
            a.push_back(p);
        }

        for (int i = 0; i < n; i++) {
            bool f = false;
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '1') {
                    int r = 0;
                    for (int k = 0; k < n; k++)
                        {
                            if (a[i][k] == '1')
                            r++;
                        }

                    for (int p = i+1; p < n; p++) {
                            int b = 0;
                        if (p == n) {
                            cout << "SQUARE" << endl;
                            f = true;
                            break;
                        }
                        for (int k = 0; k < n; k++)
                        {
                            
                            if (a[p][k] == '1')
                                b++;
                            
                        }
                        if (r == b) {
                            cout << "SQUARE" << endl;
                            f = true;
                        } else {
                            cout << "TRIANGLE" << endl;
                            f = true;
                        }
                        b = r;
                        if (f == true)
                            break;
                    }
                    if (f == true)
                        break;
                }
                if (f)
                    break;
            }
            if (f)
                break;
        }
            t--;
    }
    return 0;
}