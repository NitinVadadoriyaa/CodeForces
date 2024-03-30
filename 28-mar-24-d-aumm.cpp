#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long int
# define MAX 100007

void getBNum(vector<int>& BNUmbers){
    
    for(int i=2; i<=MAX; i++){
        int num=i;
        bool bad=false;
        while(num){
            int ld=num%10;
            if(ld>=2){
                bad=true;
                break;
            }
            num=num/10;
        }
        if(!bad)BNUmbers.push_back(i);
    }

}

bool help(int n,vector<int> &BNumbers){ // -------- MUST CALL-BY REFRENCES----//

    if(n==1)return true;
    bool ans=false;
    for(auto it: BNumbers){
        if(n%it==0){
            ans = ans || help(n/it,BNumbers);
            if (ans == true)
                return true;
        }
    }

    return ans;
}

void solve(vector<int> &BNumbers){
    int n;
    cin>>n;

   
    // for(auto it: BNumbers)cout<<it<<" ";
    // cout<<endl;

    if(help(n,BNumbers)==true){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
    #endif
    
     vector<int> BNumbers;
    getBNum(BNumbers);

    int t;
    cin>>t;
    
    while(t--){
        solve(BNumbers);
    }    
}

