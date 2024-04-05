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
        bool f = false;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
       
        int p = 1, b = 1, c = 1;
        for (int i = 0; i < n - 2; i++)
        {
            p = p * a[i];
            if (p >=  0)
                continue;

            for (int j = i + 1; j < n - 1; j++)
            {
                b = b * a[j];
                if (b <= 0)
                    continue;

                for (int k = j + 1; k < n; k++) {
                    c = c * a[k];
                }
                if (c == 0) {
                    cout << i+1 << " ";
                    for (int q = 0; q <= i; q++) {
                        cout << a[q];
                        if (i - q != 0)
                            cout << " ";
                    }
                    cout << endl;
                    cout << j - i << " ";
                    for (int q = i+1; q <= j; q++){
                        cout << a[q] << " ";
                        if (j-q != 0) {
                            cout << " ";
                        }
                    }
                    cout << endl;
                    cout << n - 1 - j << " ";
                    for (int q = j+1; q < n; q++) {
                        cout << a[q];
                        if (n - q != 1)
                            cout << " ";
                    }
                    f = true;
                    break;
                }
                else
                {
                    c = 1;
                }
            }
            if (f == false) {
                b = 1;
                c = 1;
            } else
                break;
        }
            return 0;
}