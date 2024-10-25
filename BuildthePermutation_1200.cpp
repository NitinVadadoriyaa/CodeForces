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
    int t,n,a,b;
    cin >> t ;
    while (t)
    {
        cin >> n >> a >> b;
        if (a == 0 && b == 0) {
            for (int i = 1; i <= n; i++) {
                cout << i;
                if (i != n)
                    cout << " ";
            }
            cout << endl;
            t--;
        }
        int max = 2 * ceil((n - 2) / 2.0);
        if ((n-2) % 2)
            max--;
        
        if (max < (a + b) || (abs(a-b) > 1)) {
            cout << -1 << endl;
        } else {
            if (a >= b) { // a == maxima
                cout << 1 << " " << n << " ";
                int i = 2;
                int j = n-1;
                unordered_map<int, bool> vis;
                vis[n] = true;
                vis[1] = true;
                bool turn = false;

                while ((a + b) > 1)
                {
                    if (turn) {
                        vis[j] = true;
                        cout << j-- << " ";
                        b--;
                    } else {
                        vis[i] = true;
                        cout << i++ << " ";
                        a--;
                    }
                   
                    turn = !turn;
                }
                vector<int> ar;
                if (turn) { // j moca
    while (i <= n)
                {
                    if (vis.find(i) == vis.end()) {
                        ar.push_back(i);
                    }
                    i++;
                }
                } else {

                while (j)
                {
                    if (vis.find(j) == vis.end()) {
                        ar.push_back(j);
                    }
                    j--;
                }
                }
                for (int i = 0; i < ar.size(); i++) {
                    cout << ar[i];
                    if (ar.size() - i != 1)
                        cout << " ";
                }
                cout << endl;
                
            }
            else
            {

               cout << n << " " << 1 << " ";
                int i = n-1;
                int j = 2;
                unordered_map<int, bool> vis;
                vis[n] = true;
                vis[1] = true;
                bool turn = false;

                while ((a + b) > 1)
                {
                    if (turn) {
                        vis[j] = true;
                        cout << j++ << " ";
                        a--;
                    } else {
                        vis[i] = true;
                        cout << i-- << " ";
                        b--;
                    }
                   
                    turn = !turn;
                }
                vector<int> ar;
                if (!turn) { // i ne
while (j <= n)
                {
                    if (vis.find(j) == vis.end()) {
                        ar.push_back(j);
                    }
                    j++;
                }
                } else {
                    while (i)
                {
                    if (vis.find(i) == vis.end()) {
                        ar.push_back(i);
                    }
                    i--;
                }
                }
                
                for (int i = 0; i < ar.size(); i++) {
                    cout << ar[i];
                    if (ar.size() - i != 1)
                        cout << " ";
                }
                cout << endl;
            }
        }
        t--;
    }
    return 0;
}