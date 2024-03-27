#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];

       // cout << 1 << " " << 1 << endl;
    int i = 0, j = 1;
    while(j < n) {
        if (a[j-1] < a[j]) {
            i = j;
            j++;
        } else {
            // i start point of decresing series
            int p = j + 1;
            while (p < n) {
                if (a[p-1] < a[p])
                    break;
                p++;
            }
            j = p - 1;
            if (p == n)
            {
                if (i == 0)
                {cout << "yes" << endl << i + 1 << " " << p << endl;
                return 0;}
                else {
                    if (a[i-1] < a[p-1]) {
                        cout << "yes" << endl << i + 1 << " " << p << endl;
                return 0;
                    } else {
                        cout << "no" << endl;
                return 0;
                    }
                }
            }
            else
            {

                int q = p;
                while (q < n) {
                    if (a[q-1] < a[q])
                        q++;
                    else
                        break;
                }
                if (q == n) {
                    if (i == 0 && a[i] < a[j + 1]) {
                        cout << "yes" << endl << i + 1 << " " << j + 1 << endl;
                return 0;
                    } else if (i > 0 ) {
                            if (a[i] < a[j + 1] && a[i-1] < a[j]) {
                              cout << "yes" << endl << i + 1 << " " << j + 1 << endl;
                return 0;  
                            } else {
                                cout << "no" << endl;
                return 0;
                            }
                    } else {
                        cout << "no" << endl;
                return 0;
                    }
                }
                else
                {
                    cout << "no" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "yes" << endl << 1 << " " << 1 << endl;
    return 0;
}