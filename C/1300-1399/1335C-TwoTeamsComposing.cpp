#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	int ans[t];
	for(int i = 0; i < t; i++){
		cin >> n;
		int ai[n],d,s,st,p;
		for(int j = 0; j < n; j++){cin >> ai[j];}
		sort(ai, ai+n);
		d = 1;
		s = st = 1;
		p = ai[0];
		for(int j = 1; j < n; j++){
			if(p == ai[j]){ st++; }
			else{
				p = ai[j];
				d++;
				if(st > s){ s = st;}
				st = 1;
			}
		}
		if(st > s){ s = st; }
		if(d == 1 && s == 1){ ans[i] = 0; }
		else{ 
			ans[i] = min(d,s); 
			if(s == d){ ans[i]--; }
		}		
	}
	for(int i = 0; i < t; i++){cout << ans[i] << endl;}
	return 0;
}
