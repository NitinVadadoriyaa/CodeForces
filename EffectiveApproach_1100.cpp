#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//ctrl + space to run exsiting file.


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    #endif
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> left_first_ind;
    unordered_map<int, int> right_first_ind;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (left_first_ind.find(arr[i]) == left_first_ind.end()) {
            left_first_ind[arr[i]] = i;
        }
        right_first_ind[arr[i]] = i;
    }

    int que;
    cin >> que;
    int query_ele[que];
    for (int i = 0; i < que; i++) {
        cin >> query_ele[i];
    }
    long long  left_res = 0, right_res = 0;
    for (int i = 0; i < que; i++) {
        left_res += (long long)(left_first_ind[query_ele[i]] + 1);
        right_res += (long long)(n - right_first_ind[query_ele[i]]);
    }
    cout << left_res << " " << right_res;
    return 0;
}