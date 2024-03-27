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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
       
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int i = 0, j = 0;
        string ans = "";
        bool f = false;
        while (i < n && j < m)
        {
            
            if (a[i] == 0 && b[j] == 0)
            {
                k += 2;
                ans += " 0 0";
            }
            else if (a[i] != 0 && b[j] != 0)
            {
                if (a[i] > k && b[j] > k) {
                    cout << -1 << endl;
                    f = true;
                    break;
                } else if(a[i] > k) {
                    ans += " " + to_string(b[j]);
                    j++; continue;
                } else if (b[j] > k) {
                    ans += " " + to_string(a[i]);
                    i++; continue;
                }
                else {
                    ans += " " + to_string(a[i]) + " ";
                    ans += to_string(b[j]);
                }
            }
            else
            {
                k++;
                if (a[i] != 0) {
                        if (a[i] > k) {
                        // cout << -1 << endl;
                        // f = true;
                        // break;
                        j++;
                        ans += " 0";
                        continue;
                        }
                        else
                        {
                            ans += " 0 " + to_string(a[i]);
                            // ans += to_string(b[i]);
                        }
                } else {
                    if (b[j] > k) {
                        i++;
                        // cout << -1 << endl;
                        // f = true;
                        // break;
                        ans += " 0";
                        continue;
                    } else {
                        ans += " 0 " + to_string(b[j]);
                        // ans += to_string(b[i]);
                    }
                }
            }
            i++;
            j++;
        }
        if (f == false) {

            while (i < n) {
                if (a[i] == 0) {
                    k++;
                    ans += " 0";

                } else {
                    if (a[i] > k) {
                        cout << -1 << endl;
                        f = true;
                        break;
                    } else {
                        ans += " " + to_string(a[i]);
                        // ans += to_string(b[i]);
                    }
                }
                i++;
            }
            if (f == false) {
                // cout << "y";
                while (j < m)
                {
                    if (b[j] == 0)
                    {
                        k++;
                        ans += " 0";
                    }
                    else
                    {
                        if (b[j] > k)
                        {
                            cout << -1 << endl;
                            f = true;
                            break;
                        }
                        else
                        {
                            ans += " " + to_string(b[j]);
                            // ans += to_string(b[i]);
                        }
                    }
                    j++;
                }
            }
            if (f == false) {
                cout << ans.substr(1,ans.size()-1) << endl;
            }
        }
        
        t--;
    }
    return 0;
}