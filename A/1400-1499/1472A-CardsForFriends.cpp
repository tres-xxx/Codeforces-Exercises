#include <iostream>
using namespace std;

int main(){
	long long int t,w,h,c,n;
	cin >> t;
	string ans[t];
	for(int i=0; i < t; i++){
		cin >> w >> h >> n;
		bool divF = true;
		c = 1;
		while(w%2 == 0 and divF){c*=2;w/=2;if(c>=n){divF = false;}}
		while(h%2 == 0 and divF){c*=2;h/=2;if(c>=n){divF = false;}}
		if(c >= n){ans[i] = "YES";}
		else{ans[i] = "NO";}
		
	}
	for(int i=0; i < t; i++){cout << ans[i] << endl;}
	return 0;
}
