#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;


//ctrl + space to run exsiting file.
int isP(int n) {
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int findNextPrime(int n) {
    for (int i = n; i <= 1e9; i++) {
        if(isP(i))
            return i;
    }
    return n;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    
        while (t)
        {
            int n;
            cin >> n;
            vector<int> arr(n);
            int largePrime = 0;
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
                largePrime = max(largePrime, arr[i]);
            }

            largePrime = findNextPrime(largePrime);
            vector<vector<int>> ans;
            for (int i = 0; i < n - 1; i++)
            {
                if (__gcd(arr[i],arr[i+1]) != 1) {
                    int mini = min(arr[i], arr[i + 1]);
                    arr[i] = largePrime;
                    arr[i + 1] = mini;
                    ans.push_back({i + 1, i + 2, largePrime, mini});
                }
            }

            cout << ans.size() << endl;
            for (auto &it : ans) {
                cout << it[0] << " " << it[1] << " " << it[2] << " " << it[3] << endl;
            }

            t--;
        }
    return 0;
}