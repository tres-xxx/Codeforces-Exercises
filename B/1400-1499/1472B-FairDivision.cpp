#include <iostream>
using namespace std;

int main(){
	int t,n,a,one,two;
	cin >> t;
	string ans[t];
	for(int i = 0; i < t; i++){
		cin >> n;
		one = 0;
		for(int j = 0; j < n; j++){
			cin >> a;
			if(a == 1){ one++; }
		}
		two = n-one;
		if((one > 0 && one%2==0) || (one == 0 && 0 == two%2)){ans[i] = "YES";}
		else{ ans[i] = "NO"; }
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
