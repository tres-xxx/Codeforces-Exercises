#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long ans[t],a,b,n,mn,mx;
	for(int i = 0; i < t; i++){
		cin >> a >> b >> n;
		mn = min(a,b);
		mx = max(a,b);
		ans[i] = 0;
		bool mn_s = true;
		while(mn <= n && mx <=n){
			if(mn_s){ mn += mx; mn_s = false; }
			else{ mx += mn; mn_s = true; }
			ans[i]++;
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl;}
	return 0;
}
