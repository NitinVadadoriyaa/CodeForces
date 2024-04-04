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
    
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> p,q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            p[a[i]]++;
        }
        for (int i = 0; i < n - 1; i++) {
            int num;
            cin >> num;
            q[num]++;
            p[num]--;
            if (p[num] == 0)
                p.erase(num);
        }
        cout << p.begin()->first << endl;
        for (int i = 0; i < n-2; i++) {
            int num;
            cin >> num;
            q[num]--;
            if (q[num] == 0)
                q.erase(num);
        }
        cout << q.begin()->first << endl;

        return 0;
}