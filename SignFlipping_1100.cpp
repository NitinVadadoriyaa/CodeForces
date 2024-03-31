#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.
void info(vector<int> &a,int &n,int &p,int &ne) {
    p = 0, ne = 0;
    for (int i = 1; i < n;i++) {
        if (a[i] > a[i-1])
            p++;
        else if (a[i] == a[i-1]) {

        } else
            ne++;
    }
}
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = abs(a[i] - 0);
        }
        int req = (n - 1) / 2;

        for (int i = 1; i < n; i += 2) {
            if (a[i] > a[i-1]) {
                a[i] =  - a[i];
            }
        }

        for (int i = 2; i < n; i+=2) {
            if (a[i] < a[i-1]) {
                a[i - 1] = -a[i - 1];
            }
        }

            for (int i = 0; i < n - 1; i++)
            {
                cout << a[i] << " ";
            }
        cout << a[n - 1] << endl;
        t--;
    }
    return 0;
}