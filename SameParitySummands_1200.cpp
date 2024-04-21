#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


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
        int n,k;
        cin >> n >> k;
        if (k > n) {
            cout << "NO" << endl;
        } else if (k == n) {
            cout << "YES" << endl;
            for (int i = 0; i < k; i++){
                cout << 1;
                if (k - i != 1)
                    cout << " ";
                else
                    cout << endl;
            }
        } else if (k == 1){
            cout << "YES" << endl;
            cout << n << endl;
        } else {
            int ele = n / k;
            int r = n % k;
            if (r == 0) {
                cout << "YES" << endl;
                for (int i = 0; i < k; i++){
                    cout << ele;
                    if (k - i != 1)
                        cout << " ";
                    else
                        cout << endl;
                }
            } else if (r % 2 == 0) {
                 cout << "YES" << endl;
                for (int i = 0; i < k; i++){
                    if (i == 0)
                    cout << ele + r;
                    else 
                    cout << ele;

                    if (k - i != 1)
                        cout << " ";
                    else
                        cout << endl;
                }
            } else {
                if (ele == 1) {
                    cout << "NO" << endl;
                } else if (k % 2 == 0){
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                    for (int i = 0; i < k; i++){
                        if (i == 0)
                        cout << ele + r;
                        else if (i % 2)
                        cout << ele - 1;
                        else
                            cout << ele + 1;

                        if (k - i != 1)
                            cout << " ";
                        else
                            cout << endl;
                    }
                }
            }   
        }
            t--;
    }
    return 0;
}