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
        int a = 0;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++){

            cin >> arr[i];
        sum += arr[i];
        }

        int m = sum / n;
        int i = 0;
        for (i; i < n; i++)
        {
            if (arr[i] >= m) {
                a += arr[i] - m;
            } else {

                a = a - (m - arr[i]);
            
            }
            if (a < 0) {
                cout << "NO" << endl;
                break;
            }
        }
        if(i == n)
        cout << "YES" << endl;
        t--;
    }

    return 0;
}