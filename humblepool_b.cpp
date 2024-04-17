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
    int t;
    cin >> t;
    while (t) {
        int n;
        cin >> n;
        vector<bitset<32>> a(n);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            a[i] = bitset<32>(num);
            // cout << a[i].to_ulong() << endl;
        }
        
        int ans = 0;
        for (int i = 32; i >= 0; i--)
        {
            vector<vector<int>> temp;
            for (int j = 0; j < n; j) {
                
                if (a[j][i] == 1) {
                    int k = j+1;
                    for (; k < n; k++)
                    {
                        if (a[k][i] != 1)
                            break;
                    }
                    
                        k--;
                    temp.push_back({j, k});
                    j = k + 1;
                } else {
                    j++;
                }
            }
        
            if (temp.size() == 0)
                continue;
            else {
                //                 for (auto it : temp) {
                //     cout << it[0] << " " << it[1] << " ";
                // }
                // cout << endl;
                if (temp.size() == 1)
                {
                    if (temp[0][0] == 0 && temp[0][1] == n-1)
                        continue;

                    if (temp[0][0] == 0)
                    {
                        ans = n - temp[0][1] - 1;
                        // cout << ans << endl;
                        break;
                    }
                    else if (temp[0][1] == n - 1)
                    {
                        ans = temp[0][0];
                        break;
                    }
                }
                else {
                    int pp = -1, q = -1;

                    for (int p = 0; p < temp.size(); p++)
                    {
                        if (temp[p][0] == 0) {
                            pp = temp[p][1];
                        }
                        if (temp[p][1] == n-1) {
                            q = temp[p][0];
                        }

                    }

                    if (pp != -1 && q != -1) {
                        // cout << "ye";
                        ans = q - pp - 1;
                        break;

                    } else if (pp != -1) {
                        // cout << pp << endl;
                        ans = n - pp - 1;
                        break;
                    } else if (q != -1) {
                        ans = q;
                        break;
                    }
                }
            }
            // cout << i << " " << ans << endl;
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}