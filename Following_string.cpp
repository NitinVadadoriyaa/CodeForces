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
    int t;
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        int arr[n];
        vector<int> d(26, 0);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<char> st(n,' ');
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1) {
                for (int j = 0; j < 26; j++) {
                    if (d[j] == 0) {
                        char c = 'a' + j;
                        d[j] += 2;
                        st[i] = c;
                        for (int k = 0; k < i; k++) {
                            if (st[k] == ' ') {
                                st[k] = c;
                                break;
                            }
                        }
                        break;
                    }
                }
            } else if (arr[i] > 1) {
                for (int j = 0; j < 26; j++) {
                    if (d[j] == arr[i]) {
                        char c = 'a' + j;
                        d[j] += 1;
                        st[i] = c;
                        break;
                    }
                }
            }
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (st[i] == ' ') {
                while (j < 26) {
                    if (d[j] == 0) {
                        break;
                    }
                    j++;
                }
                st[i] = 'a' + j;
                d[j] = 1;
            }
            cout << st[i];
        }
        cout << endl;
        t--;
    }
    return 0;
}