#include <iostream>
using namespace std;

int main(){
	long long t,n,i,d,m;
	cin >> t;
	string ans[t];
	for(i = 0; i < t; i++){ 
		cin >> n;
		d = n/2020;
		m = n%2020;
		if(m <= d){ ans[i] = "YES"; }
		else{ ans[i] = "NO"; }
	}
	for(i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
