#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t,n,d;
	cin >> t;
	string ans[t];
	for(int i = 0; i < t; i++){
		cin >> n >> d;
		int ai[n];
		for(int j = 0; j < n; j++){ cin >> ai[j]; }
		sort(ai,ai+n);
		if(ai[0] > d || (ai[0] == d && ai[n-1] > d)){ ans[i] = "No"; }
		else{
			if(ai[n-1] <= d || ((ai[0] + ai[1]) <= d)){ ans[i] = "Yes"; }
			else{ ans[i] = "No"; }
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
