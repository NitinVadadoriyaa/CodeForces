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
    
    vector<string> mat(4);
    for (int i = 0; i < 4; i++) {
        string input;
        cin >> input;
        mat[i] = input;
    }
    int i = 0;
    for (i; i <= 2; i++) {
        int j = 0;
        for (j; j <= 2; j++) {
            int count_white = 0, count_black = 0;
            for (int k = i; k < (i + 2); k++)
            {
                for (int m = j; m < (j + 2); m++) {
                    if (mat[k][m] == '.')
                        count_white++;
                    else
                        count_black++;
                }
            }
                if (count_white != count_black) {
                    cout << "YES" << endl;
                    return 0;
                }
        }
    }
    cout << "NO" << endl;
    return 0;
}