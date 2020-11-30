#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	for(int i=0; i<m; ++i)
		cin >> b[i];
	int c0=0,c1=0;
	for(int i=0; i<n; ++i) {
		if(a[i]%2==0)
			c0++;
		else
			c1++;
	}
	int k0=0, k1=0;
	for(int i=0; i<m; ++i) {
		if(b[i]%2==0)
			k0++;
		else
			k1++;
	}
	cout << min(c0, k1)+min(c1, k0) << "\n";
}
