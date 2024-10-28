#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef long double ld;

//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif

    int t;
    cin >> t;
    while(t) {
        int n,u,v;
        cin >> n >> u >> v;
        vector<int> obs(n);
        for (int i = 0; i < n; i++)
            cin >> obs[i];

        int minCost = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            if (obs[i] - obs[i+1] == 0) { // same col.
                minCost = min(minCost, u + v);
                if (obs[i] >= 2 or obs[i] <= 1e6 - 1 or (obs[i] - 1 >= 0 and obs[i+1] + 1 <= 1e6 + 1)) {
                    minCost = min(minCost, v + v);
                }
            }
            else if (abs(obs[i] - obs[i+1]) >= 2) 
            {
                minCost = 0;
                break;
            }
            else
            {
                minCost = min(minCost, u);
                if (obs[i] > obs[i+1]) { // Top RIght
                        if (obs[i+1] - 1 >= 0) {
                            minCost = min(minCost, v);
                        } else if (obs[i] + 1 <= 1e6 + 1) {
                            minCost = min(minCost, v);
                        }
                } else {
                    if (obs[i] - 1 >= 0) {
                            minCost = min(minCost, v);
                        } else if (obs[i + 1] + 1 <= 1e6 + 1) {
                            minCost = min(minCost, v);
                        }
                }
            }
        }

        cout << minCost << endl;

        t--;
    }
    return 0;
}