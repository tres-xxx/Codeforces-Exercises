#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long ans[t] = {},a,b,c,tm;
	for(int i = 0; i < t; i++){
		cin >> a >> b >> c;
		tm = c/2;
		if(tm > 0){
			if(tm > b){ ans[i] += ((b*2)+b); b = 0; }
			else{ ans[i] += ((tm*2)+tm); b-=tm;}
		}
		tm = b/2;
		if(tm > 0){
			if(tm > a){ ans[i] += ((a*2)+a); }
			else{ ans[i] += ((tm*2)+tm);}
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }	
	return 0;
}
