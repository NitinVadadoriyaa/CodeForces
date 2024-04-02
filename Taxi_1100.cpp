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
   
 
        int n;
        cin >> n;
        int o = 0, t = 0,  th = 0, f = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == 1)
                o++;
            else if (num == 2)
                t++;
            else if (num == 3)
                th++;
            else
                f++;
        }
        int taxi = 0;
        taxi += f;
        taxi += th;
        o = o - min(o, th);
        int temp = t / 2;
        taxi += temp;
        
        if (t % 2){
            o = o - min(2, o);
            taxi++;
        }
        taxi += (o / 4);
        if (o % 4)
            taxi++;
        cout << taxi << endl;

        return 0;
}