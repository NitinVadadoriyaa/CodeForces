#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int w;
    cin >> w;
    for (int i = 1; i < w; i++) {
        if ((i % 2 == 0) && ((w - i) % 2 == 0)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}