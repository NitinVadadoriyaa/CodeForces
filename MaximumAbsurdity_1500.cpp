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

    int n, k;
    cin >> n >> k;
    vector<long long> a(n+1);
    vector<long long> pre(n + 1, 0); // access sum of k-length array in o(1) time
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }

    // make one parameter(segment) calculated
    vector<long long> dp(n + 1, 0);
    vector<int> ind(n + 1);

    dp[k] = pre[k];
    ind[k] = 1;
    for (int i = k + 1; i <= n; i++) { // max sum segment inbetween 0 to i th index
        long long currSum = pre[i] - pre[i - k]; // sum of current segment
        if (currSum > dp[i-1]) { 
            dp[i] = currSum;
            ind[i] = i - k + 1;
        } else {
            dp[i] = dp[i - 1];
            ind[i] = ind[i - 1];
        }
    }

    // claculate next/second segment of length k
    long long sum = LONG_MIN;
    int s, e; // final index
    for (int i = 2 * k; i <= n; i++)
    {
        long long temp = 0;
        int maxSumSegmentInd = i - k;
        temp = dp[maxSumSegmentInd];
        temp += (pre[i] - pre[i - k]); // second segment sum

        if (temp > sum) {
            
            s = ind[i - k];
            e = i - k + 1;
            sum = temp;
        }
    }

    cout << s << " " << e << endl;

    return 0;
}