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
    unordered_map<int, int> m;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        m[num]++;
        if (num > 0 && num <= n) {
            v[num] = 1;
        }
    }
    long long sum = 0;
    int ind = n;
    vector<int> a;
    for (auto it : m)
    {
        if (it.first <= 0 || it.first > n) {
            int c = 0;
            while (c < it.second) {
                a.push_back(it.first);
                c++;
            }
        }
        else if(it.second > 1) {
            int c = 1;
            while (c < it.second) {
                a.push_back(it.first);
                c++;
            }
        }
    }

    sort(a.begin(), a.end());
    for (int i = a.size() - 1; i >= 0; i--) {
        while (ind >= 0) {
            
            if (v[ind] == 0) {
                // cout << ind << endl;
                break;
            }
            ind--;
        }
        v[ind] = 1;
        sum += abs(a[i] - ind);
    }

        cout << sum << endl;

    return 0;
}