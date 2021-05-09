#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	long long int t, n, i, j, s, e, ep;
	cin >> t;
	long long int ans[t];
	bool neg,pneg; 
	for(i = 0; i < t; i++){
		cin >> n;
		//long long int ai[n];
		//for(j = 0; j < n; j++){ cin >> ai[j];  }
		s = 0;
		pneg = false; // first element
		ep = 0;
		for(j = 0; j < n; j++){ 
			cin >> e;
			if(e < 0){ neg = true; }
			else{ neg = false; }
			if(neg != pneg){
				s += ep;
				ep = 0;
			}
			if(ep == 0){ ep = e; pneg = (e>0) ? false:true;}
			else{ ep = max(e,ep); }
		}
		
		ans[i] = s+ep;
	}
	for(i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
