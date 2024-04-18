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
        int n;
        cin >> n;
        // int maxi = 0;
        // unordered_map<int, vector<int>> h;
        vector<int> a(n);
        bool isAll = true;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            a[i] = num;
            if (i != 0)
            {
                if (a[i] != a[i-1])
                    isAll = false;
            }
        }
        // vector<int> v;
        // cout << maxi << endl;
        if (isAll == false)
        {
            cout << "YES" << endl;

            vector<bool> vis(n, false);
            vis[0] = true;
            int ind = -1;
            
                for (int j = 1; j < n; j++) {
                    if (a[0] != a[j]) {
                        ind = j;
                        cout <<  1 << " " << j + 1 << endl;
                        vis[j] = true;
                    }
                }
            

            for (int i = 0; i < n; i++) {
                if (vis[i] == false) {
                        cout << ind+1 << " " <<  i + 1 << endl;

                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }

            t--;
    }
    return 0;
}