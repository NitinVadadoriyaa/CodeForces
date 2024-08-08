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
    int n, b;
    cin >> n >> b;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

        vector<pair<int,int>>pre(n);
    
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            pre[i] = {0,0};
            if (a[i] % 2) pre[i].first++;
            else pre[i].second++;
        } else {
            pre[i] = {0,0};
            if (a[i] % 2) pre[i].first++;
            else pre[i].second++;
            pre[i].first += pre[i-1].first;
            pre[i].second += pre[i-1].second;
        }
    }

    vector<int> d;
    for (int i = 1; i < n; i += 2) {
        if (i+1 < n) {
            int odd = pre[i].first;
            int even = pre[i].second;
            if(odd == even) {
                d.push_back(abs(a[i] - a[i + 1]));
                // cout << d.back() << " ";
            }
        }
    }

    sort(d.begin(), d.end());
    int sum = b;
    int i = 0;
    int ans = 0;
    while (i < d.size())
    {
        sum -= d[i];
        if (sum < 0)
            break;
        ans++;
        i++;
    }

        cout << ans << endl;

    return 0;
}