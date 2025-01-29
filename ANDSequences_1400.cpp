/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

//ctrl + space to run exsiting file.
ll findFact(ll n) {
    ll ans = 1;
    for (; n > 0; n--) {
        ans = (ans * n) % mod;
    }
    return ans;
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
        int andRes = pow(2, 31) - 1;
        // cout << andRes << endl;
        // break;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            andRes &= a[i];
            freq[a[i]]++;
        }
        if(freq.find(andRes) != freq.end() && freq[andRes] > 1) {
            ll base = freq[andRes];
            ll ans = (((base * (base - 1)) % mod) * findFact(n - 2)) % mod;
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
            t--;
    }
    return 0;
}