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
        vector<int> a(n),zero(n,0),one(n,0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 2) {
            if (a[0] == a[1]) {
                cout << 2 << endl;
                cout << a[0] << " " << a[1] << endl;
            } else {
                cout << 1 << endl;
                cout << 0 << endl;
            }
        } else {

            zero[n - 1] = one[n - 1] = -1;
            for (int i = n - 2; i >= 0; i--)
            {
                if (a[i+1] == 0) {
                    zero[i] = i + 1;
                    one[i] = one[i + 1];
                } else {
                    one[i] = i + 1;
                    zero[i] = zero[i + 1];
                }
            }
            // cout << endl;
            
            int start = 0;
                int ele = 0;
            for (int i = 0; i < (n / 2); i++)
            {
                start = i;
                int j = i;
                ele = 0;
                while (j < n)
                {
                    if (a[j] == 1) {
                        if (one[j] != -1) {
                            j = one[j] + 1;
                            ele += 2;
                        } else {
                            break;
                        }
                    } else {
                        if (zero[j] != -1) {
                            j = zero[j] + 1;
                            ele += 2;
                        } else {
                            break;
                        }
                    }
                }
                if (ele >= (n/2)) {
                    break;
                }
            }
            cout << ele << endl;
            int j = start;
            while (j < n)
            {
                if (a[j] == 1)
                {
                    if (one[j] != -1)
                    {
                        if (start == j){
                            cout << "1 1";
                        }
                        else cout << " 1 1";
                        j = one[j] + 1;
                    }
                    else
                    {
                        cout << endl;
                        break;
                    }
                }
                else
                {
                    if (zero[j] != -1)
                    {
                        if (start == j){
                            cout << "0 0";
                        }
                        else cout << " 0 0"; 
                        j = zero[j] + 1;
                    }
                    else
                    {
                        cout << endl;
                        break;
                    }
                }
            }
            if (j >= n && t != 1) {
                cout << endl;
            }
        }
            t--;
    }
    return 0;
}