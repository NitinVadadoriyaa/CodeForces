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
        vector<int> even,odd;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num % 2) {
                odd.push_back(num);
            }
            else
            {
                even.push_back(num);

            }
        }

        if (even.size() % 2 == 0 && odd.size() % 2 == 0) {
            cout << "YES" << endl;
        } else {
            bool f = false;
            for (auto eve : even)
            {
                for (auto od : odd) {
                    if (abs(eve - od) == 1) {
                        f = true;
                        break;
                    }
                }
            }
            if (f) {
            cout << "YES" << endl;
                
            } else {
            cout << "No" << endl;

            }
        }
            t--;
    }
    return 0;
}