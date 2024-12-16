/*SHREE GANESHAY NAMH*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
typedef pair<int, int> pp;

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
        
        map<int, int> fre;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            fre[num]++;
        }

        priority_queue<int> maxH;
        for (auto it : fre) {
            maxH.push(it.second);
        }

        while(maxH.size() > 1) {
            int firHightes = maxH.top();
            maxH.pop();
            int secHightes = maxH.top();
            maxH.pop();
            int thirHighest;    
            firHightes -= 1;
            secHightes -= 1;
            if (firHightes != 0)
                maxH.push(firHightes);
            if (secHightes != 0)
                maxH.push(secHightes);
        }
        if (maxH.size() == 0)
            maxH.push(0);
        cout << maxH.top() << endl;

        t--;
    }
    return 0;
}