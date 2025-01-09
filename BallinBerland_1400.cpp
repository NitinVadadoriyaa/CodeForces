/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

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
        int a,b,k;
        cin >> a >> b >> k;
        vector<int> vec1(a + 1,0),vec2(b + 1,0);
        vector<pp> vec(k);
        for (int i = 0; i < k; i++)
        {
            int num;
            cin >> num;
            vec[i].first = num;
            vec1[num]++;
        }
        for (int i = 0; i < k; i++) {
            int num;
            cin >> num;
            vec[i].second = num;
            vec2[num]++;
        }
        ll ans = 0;
        for (auto it : vec) {
            ans += (k - vec1[it.first] - vec2[it.second] + 1);
        }
        cout << ans / 2 << endl;
        t--;
    }
    return 0;
}