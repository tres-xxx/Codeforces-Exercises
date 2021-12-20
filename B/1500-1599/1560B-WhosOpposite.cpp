#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		long a,b,c,mn,mx,s;
		cin >> a >> b >> c;
		mn = min(a,b);
		mx = max(a,b);
		if(mn == 1){
			if(mx == 2){cout << -1 << endl;continue;}
			s = mx-2;
			if(c > (mx+s)){cout << -1 << endl;continue;}
			if(c > mx){ cout << mn+(c-mx) << endl;}
			else{ cout << mx+(c-mn) << endl;}
		}else{
			//if((mx-mn) == 1){ cout << -1 << endl; continue;}
			s = mx-mn;
			if(s < mn){ cout << -1 << endl; continue;}
			if(s == mn && c != (mn-1) && c != (s+1)){ cout << -1 << endl; continue;}
			//s = mx-mn-1;
			s--;
			a = mx-mn+1;
			if(c > (a+s)){ cout << -1 << endl;}
			else{
				if(c >= a){ cout << 1 + (c-a) << endl;}
				else{ cout << a + (c-1) << endl;}
			}
		}
	}
	return 0;
}
