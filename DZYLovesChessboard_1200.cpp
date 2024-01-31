#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ctrl + space to run exsiting file.

bool solve(vector<vector<char>> &mat,int &n,int &m,int i,int j) {
   
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n, m;
    cin >> n >> m;
    vector<vector<char>>mat(n, vector<char>(m));
    for (short int i = 0; i < n; i++) {
        for (short int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if (mat[i][j] == '.') {
            //place chess-master in column wise or row wise
            //OBJERVATION : each odd cell cover with 4-dimension even cell
            // each even-cell cover with 4-dimension odd cell
            if ((i+j) % 2 == 0 ) { // even place 
                mat[i][j] = 'B';
            } else
                mat[i][j] = 'W';
          }
          cout << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}