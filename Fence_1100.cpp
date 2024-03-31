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
    

        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int i = 0, j = 0;
        int sum = 0;
        int ind = -1;
        int mini = INT_MAX;
        while (j < n)
        {
            sum += a[j];
            if (j-i+1 >= k) {
                
                if (j-i+1 > k) {
                    sum -= a[i++];
                }
                if (sum < mini) {
                    mini = sum;
                    ind = i;
                }
            }
            j++;
        }
        cout << ind+1 << endl;
        return 0;
     }
