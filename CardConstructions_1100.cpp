    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    #define mod 1e9 + 7

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
            int n;
            cin >> n;
            int cnt = 0;
            if (n == 1)
                {cout << 0 << endl;
            t--;
            continue;}

            while (n > 1)
            {
                int l = 1, r = n;
                ll ans = 0;
                // cout << n << endl;
                while (l <= r)
                {
                    ll mid = (l + r) / 2;
                    int midd = mid;
                    mid = 3 * (mid * mid) + mid;
                    if ((mid / 2) <= n)
                    {
                        ans = midd;
                        l = midd + 1;
                    }
                    else
                    {
                        r = midd - 1;
                    }
                }
                // cout << ans << endl;
                n = n - ((3 * (ans * ans) + ans)/2);
                if (ans >= 1)
                    cnt++;
            }
            cout << cnt << endl;
            t--;
        }
        return 0;
    }