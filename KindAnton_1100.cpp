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
        vector<vector<int>> x(n);
        vector<int> y(n);
        int a = 0, b = 0, c = 0; // a= 0, b = -1 ,c = 1
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            x[i] = {num, a, b, c};

            if (num == 0)
                a++;
            else if (num == -1)
                b++;
            else
                c++;
        }
        
        for (int i = 0; i < n; i++)
            cin >> y[i];

        bool f = true;
        for (int i = n - 1; i >= 0; i--)
        {
            int num = y[i];
            if (num == 1 && x[i][0] == 1) {
                continue;
            } else if (num == 0 && x[i][0] == 0)
                continue;
            else if (num == -1 && x[i][0] == -1) continue;

            if (x[i][0] == 0 && num < 0 && x[i][2] == 0)
            {
                f = false;
            }
            else if (x[i][0] == 1 && num < 0 && x[i][2] == 0)
            {
                f = false;
            }
            else if (x[i][0] == -1 && num < 0 && x[i][2] == 0)
            {
                f = false;
            }
            else if (x[i][0] == 0 && num > 0 && x[i][3] == 0)
            {
                f = false;
            }
            else if (x[i][0] == -1 && num > 0 && x[i][3] == 0)
            {
                f = false;
            }
            else if (x[i][0] == 1 && num > 0 && x[i][3] == 0)
            {
                f = false;
            } 
            else if (x[i][0] == 1 && num == 0 && x[i][2] == 0)
            {
                f = false;
            }
            else if (x[i][0] == -1 && num == 0 && x[i][3] == 0)
            {
                f = false;
            }
        }
        if (f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;

        }
        t--;
    }
    return 0;
}