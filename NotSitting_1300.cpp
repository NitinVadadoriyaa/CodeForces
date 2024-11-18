#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

// ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int t;
    cin >> t;
    while (t) {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n,vector<int>(m,0));
        vector<int> ans(n * m);
        int ind = 0;

        int dist = 0;
        dist = max(dist, (abs(0 - (int)ceil((n-1) / 2.0)) + abs((m-1) - (int)ceil((m-1) / 2.0))));
        dist = max(dist, (abs(0 - (int)ceil((n-1) / 2.0)) + abs(0 - (int)ceil((m -1)/ 2.0))));
        dist = max(dist, (abs(n-1 - (int)ceil((n-1) / 2.0)) + abs(0 - (int)ceil((m-1) / 2.0))));
        dist = max(dist, (abs(n-1 - (int)ceil((n-1) / 2.0)) + abs((m-1) - (int)ceil((m-1) / 2.0))));
        // cout << dist << endl;
        queue<pp>que;

        // n--;
        // m--;

        if (n % 2 == 0 && m % 2 == 0)
        {
            ans[0] = dist;
            ans[1] = dist;
            ans[2] = dist;
            ans[3] = dist;
            ind = 4;
            que.push({n / 2, m / 2});
            que.push({n / 2, m / 2 - 1});
            que.push({n / 2 - 1, m / 2 });
            que.push({n / 2 - 1, m / 2  - 1});
            a[n / 2][m / 2] = dist;
            a[n / 2][m / 2 - 1] = dist;
            a[n / 2 - 1][m / 2] = dist;
            a[n / 2 - 1][m / 2 - 1] = dist;
        }
        else if (n % 2 != 0 && m % 2 == 0)
        {
            ans[0] = dist;
            ans[1] = dist;
            que.push({n / 2 , m / 2 - 1});
            que.push({n / 2 , m / 2 }); 
            a[n / 2][m / 2 - 1] = dist;
            a[n / 2][m / 2 ] = dist;

            ind = 2;
        }
        else if (n % 2 == 0 && m % 2 != 0)
        {
            que.push({n / 2, m / 2 });
              que.push({n / 2 - 1, m / 2  });
            a[n / 2][m / 2 ] = dist;
            a[n / 2 - 1][m / 2 ] = dist;

            ans[0] = dist;
            ans[1] = dist;
            ind = 2;
        }
        else
        {
            ans[0] = dist;
            //   que.push({n % 2, m % 2 });
            que.push({n / 2 , m / 2 });
            a[n / 2][m / 2] = dist;
            
            ind = 1;
        }

        int row[] = {-1,0,1,0};
        int col[] = {0,1,0,-1};
        dist++;
        while (que.size())
        {
            int siz = que.size();
            while(siz) {
                int i = que.front().first;
                int j = que.front().second;

                que.pop();

                for (int jj = 0; jj < 4; jj++) {
                    int newi = row[jj] + i;
                    int newj = col[jj] + j;
                    if (newi >= 0 && newi < n && newj >=0 && newj < m) {
                        if (a[newi][newj] == 0) {
                            a[newi][newj] = dist;
                            ans[ind++] = dist;
                            que.push({newi, newj});
                        }
                    }
                }

                    siz--;
            }
            dist++;
        }

        for (int i = 0; i < n*m; i++) {
            cout << ans[i] << " ";

        }
        cout << endl;
        t--;
    }
    return 0;
}