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
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, vector<int>> index;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            index[a[i]].push_back(i);
        }

        vector<int> ans;
        int i = 0, j = 0;
        vector<int> num(200001, 0);
        int mex = 0;
        while (j < n)
        {
            num[a[j]]++;
                // cout << j << " ";

            while (true)
            {
                /* code */
                // cout <<  << endl;
                for (int ii = mex; ii < 200001; ii++)
                {
                    if (num[ii] == 0) {
                        mex = ii;
                        break;
                    }
                }
                int inx = upper_bound(index[mex].begin(),index[mex].end(),j) - index[mex].begin();
                // cout << j  << " " << inx << endl;
                if (inx == index[mex].size()) { // element not in right side
                    ans.push_back(mex);
                    mex = 0;
                    j++;
                    for (; i < j; i++) {
                        num[a[i]]--;
                    }
                        break;
                }
                else
                {
                    for (int p = j + 1; p <= index[mex][inx]; p++) {
                        num[a[p]]++;
                    }
                    j = index[mex][inx];
                }
            }
        }
        cout << ans.size() << endl;
        for (auto it : ans ) {
            cout << it << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}