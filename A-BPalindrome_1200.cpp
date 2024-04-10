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
        int z,o;
        cin >> z >> o;
        string s;
        cin >> s;

        for (auto c : s) {
            if (c == '0')
                z--;
            else if (c == '1')
                o--;
        }
        // cout << z << o << '*'  << endl;
        if (z < 0 || o < 0)
        {
            cout << -1 << endl;
        }
        else if (s.size() == 1)
        {
            if (s[0] == '?') {
                if (z > 0 || o > 0) {
                    if (z > 0) {
                    cout << 0 << endl;

                    } else {
                    cout << 1 << endl;

                    }
                } else {
                    cout <<-1<< endl;

                }
            } else if (s[0] == '1' && o == 0 && z == 0) {
            cout << s << endl;

            } else if (s[0] == '0' && z == 0 && o == 0) {
            cout << s << endl;

            } else
                cout << -1 << endl;
        }
        else
        {
            bool f = true;
            int i = 0, j = s.size() - 1;
            while(i < j) {
                // cout << s[i] << " " << s[j] << " ";
                if (s[i] == '?' and s[j] == '?')
                {
                    if (o > z) {
                        if (o >= 2) {
                            s[i] = '1';
                            s[j] = '1';
                            o -= 2;
                        } else {
                            f = false;
                            break;
                        }
                    } else {
                        if (z >= 2) {
                            s[i] = '0';
                            s[j] = '0';
                            z -= 2;
                        } else {
                            f = false;
                            break;
                        }
                    }
                    i++;
                    j--;
                }
                else if (s[i] == '?')
                {
                    if (s[j] == '1') {
                        s[i] = '1';
                        o--;
                    } else {
                            s[i] = '0';
                        z--;
                    }
                    if (o < 0 || z < 0) {
                        f = false;
                        break;
                    }
                    i++;
                    j--;
                }
                else if (s[j] == '?')
                {
                    if (s[i] == '1')
                    {
                        s[j] = '1';
                        o--;
                    } else {
                            s[j] = '0';
                        z--;
                    }
                    if (o < 0 || z < 0) {
                        f = false;
                        break;
                    }
                    i++;
                    j--;
                }
                else if (s[i] == s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    f = false;
                    break;
                }
                // cout << s[i] << " " << s[j] << endl;

            }
            if (f) {
                if (z < 0 || o < 0) {
                    cout << -1 << endl;
                } else if (s.size() % 2) {
                    if (s[i] == '?') {
                        if (z >= 1 or o >= 1) {
                            if (z) {
                                s[i] = '0';
                                z--;
                            } else {
                                s[j] = '1';
                                o--;
                            }
                        }
                        else
                        {
                            cout << -1 << endl;
                            t--;
                            continue;
                        }
                    } 
                }
                if (z == 0 && o == 0) {
                 cout << s << endl;

                } else {
                    cout << -1 << endl;
                }
            } else {
                cout << -1 << endl;
            }
        }
            t--;
    }
    return 0;
}