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
    int t;
    cin >> t;
    while (t) {
        int W,H;
        cin >> W >> H;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int w, h;
        cin >> w >> h;

        //Not possible case
        if ((y2 - y1 + h > H) && (x2 - x1 + w > W)) {
            cout << -1 << endl;
        } else {
            //down
            if (y1 > h or x1 > w or (H-y2) > h or (W-x2) > w) {
                cout << 0 << endl;
            } else {
                int mini = 1e9;
                if ((h - y1) + y2 <= H) {
                    mini = min(mini, h - y1);
                    mini = min((h - (H - y2)), mini);
                }
                if ((w - x1) + x2 <= W) {
                    mini = min(mini, (w - x1));
                    mini = min(mini, w - (W - x2));
                }

                cout << mini << endl;
            }
        }
        t--;
    }
    return 0;
}