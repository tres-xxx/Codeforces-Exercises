#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int q,n,x,a,b,l,ll,r;
	cin >> q;
	int ans[q] = {};
	for (int i = 0; i < q; i++){
		cin >> n >> x >> a >> b;
		l = min(a,b);
		r = max(a,b);
		ll = l-x;
		//cout << l << endl;
		if(ll < 1){ 
			ll = 1; 
			x = x-(l-ll);
			r = r+x;
			if(r > n){ r = n; }
		}
		l = ll;
		//cout << l << " " << r << endl;
		ans[i] = r-l;
	}
	for (int i = 0; i < q; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
