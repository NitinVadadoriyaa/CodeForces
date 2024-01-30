
#include <bits/stdc++.h>

using namespace std;

class SGTree {
    
  public: 
    vector<int>seg;
    SGTree (int n) {
        seg.resize(4 * n);
    }
    void build(int ind, int low, int high, int arr[], bool isOr) {
        if (low == high) {
            seg[ind] = arr[low];
            return;
        }
        
        int mid = (low + high) >> 1;
        build(ind * 2 + 1, low, mid, arr, !isOr);
        build(ind * 2 + 2, mid + 1, high, arr, !isOr);
        if (isOr) { // or
        	seg[ind] = (seg[ind * 2 + 1] | seg[ind * 2 + 2]);
        } else { // ex-or
        	seg[ind] = (seg[ind * 2 + 1] ^ seg[ind * 2 + 2]);
        }
    }
    
    void update(int ind, int low, int high, int i, int val, bool isOr) { // i -> index of array 
        if (low == high) {
            seg[ind] = val;
            return;
        }
        
        int mid = (low + high) >> 1;
        if (low <= i && i <= mid) 
            update(ind * 2 + 1, low, mid, i, val, !isOr);
        else 
            update(ind * 2 + 2, mid + 1, high, i, val, !isOr);
        
        if (isOr) { // or
        	seg[ind] = (seg[ind * 2 + 1] | seg[ind * 2 + 2]);
        } else { // ex-or
        	seg[ind] = (seg[ind * 2 + 1]  ^ seg[ind * 2 + 2]);
        }
    }
};

int main() {
   int n, m;
    cin >> n >> m;
    int ele = pow(2,n);
    int arr[ele];
    for (int i = 0; i < ele; i++) cin >> arr[i];
    SGTree seg1(ele);
    if (n % 2) {
    	seg1.build(0,0,ele-1,arr,true); // do or
    } else {
    	seg1.build(0,0,ele-1,arr,false); // do ex-or
    }
 
    //read query and execuet it
    while (m--) {
    	int i, val;
    	cin >> i >> val;
    	i = i - 1; // array element is in 0-based index
    	if (n % 2) {
    		seg1.update(0,0,ele-1,i,val,true); // do or
		} else {
			seg1.update(0,0,ele-1,i,val,false); // do ex-or
		}	
   		arr[i] = val;
   		cout << seg1.seg[0] << endl;
    }
    
    return 0;
}
