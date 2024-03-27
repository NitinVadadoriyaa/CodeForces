#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7

//ctrl + space to run exsiting file.

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif

    int pachi = 0, pacha = 0, so = 0;
    int n;
    bool notPosible = false;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (num == 25){
            pachi++;
        }
        else if (num == 50){
             pacha++;
                if (pachi)
                    pachi--;
                else {
                    notPosible = true;
                    break;
                }
        }
        else {
            so++;
            if (pacha && pachi) {
                pacha--;
                pachi--;
            } else if (pachi >= 3) {
                pachi -= 3;
            } else {
                notPosible = true;
                    break;
            }
        }

    }
    if (notPosible) {
        cout << "NO" << endl;
    } else
        cout << "YES" << endl;  

        return 0;
}