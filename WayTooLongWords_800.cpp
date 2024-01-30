#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        int siz = str.size();
        if (siz > 10) {
            cout << str[0] << siz - 2 << str[siz - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }

    return 0;
}