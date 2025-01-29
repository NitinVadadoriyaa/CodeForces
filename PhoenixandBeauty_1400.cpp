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
        int n,k;  
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, bool> distintNum;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            distintNum[a[i]] = true;
        }
        if (distintNum.size() > k) {
            cout << -1 << endl;
        } else if (distintNum.size() == k){
            cout << k * n << endl;
            for (int i = 1; i <= n; i++)
            {
                int size = 0;
                for (auto it : distintNum)
                {
                    cout << it.first;
                    size++;
                    if (size < distintNum.size())
                    {
                        cout << " ";
                    }
                }
                if (n - i != 0) {
                    cout << " ";
                }
                        }
        cout << endl;
        } else {
            cout << k * n << endl;

            int extra = k - distintNum.size();
              for (int i = 1; i <= n; i++)
            {

               
                for (auto it : distintNum)
                {
                    cout << it.first << " ";
                }
                for (int j = 1; j <= extra; j++) {
                    cout << 1;
                    if (extra - j != 0) {
                        cout << " ";
                    }
                }
                 if (n - i != 0) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        t--;
    }
    return 0;
}