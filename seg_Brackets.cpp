#include <bits/stdc++.h>
using namespace std;

struct node {
	int open, close, full;
	node() {
		open = 0;
		close = 0;
		full = 0;
	}
	node(int _open, int _close, int _full) {
		open = _open;
		close = _close;
		full = _full;
	}
};

node merge(node &left, node &right) {
	node ans = node();
	ans.open = left.open + right.open - min(left.open, right.close);
	ans.close = left.close + right.close - min(left.open, right.close);
	ans.full = left.full + right.full + min(left.open, right.close);
	
	return ans;
}

void build(int ind, int low, int high, node seg[], string &str) {
	if (low == high) {
		seg[ind].open = (str[low] == '(');
		seg[ind].close = (str[low] == ')');
		seg[ind].full = 0;
		return;
	}
	
	int mid = (low + high) >> 1;
	build(ind * 2 + 1, low, mid, seg, str);
	build(ind * 2 + 2, mid + 1, high, seg, str);
	//merge left and right
	seg[ind] = merge(seg[ind * 2 + 1], seg[ind * 2 + 2]);
}

node query(int ind, int low, int high, int l, int r, node seg[]) {
	//no-overlape
	if (high < l || r < low) return node();
	
	//complete overlape
	if (l <= low && high <= r) return seg[ind];
	
	//partialy overlape
	int mid = (low + high) >> 1;
	node left = query(ind * 2 + 1, low , mid, l , r , seg);
	node right = query(ind * 2 + 2, mid + 1, high, l, r, seg);
	return merge(left, right);
}

int main()
{
	string str;
	cin >> str;
	int n = str.size();
	node seg[4 * n];
	build(0,0,n-1,seg,str);
	int q;
	cin >> q;
	
	while (q--) {
		int l,r;
		cin >> l >> r;
		l--; r--; // 0-based indexing
		node res = query(0,0,n - 1, l ,r, seg);
		cout << res.full * 2 << endl;
	}
	
	return 0;
}

