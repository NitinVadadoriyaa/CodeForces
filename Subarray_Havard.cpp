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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> fre;
    ll ans = 0;
    int i = 0, j = 0;
    while(j < n) {
        fre[a[j]]++;
        while (fre.size() > k) {
            fre[a[i]]--;
            if (fre[a[i]] == 0)
                fre.erase(a[i]);
            i++;
        }
        ans = ans + (j - i + 1);
        j++;
    }
    cout << ans << endl;
    
    return 0;
}