#include <iostream>
using namespace std;

int main(){
	int t,n,a,e;
	cin >> t;
	string ans[t];
	for(int i=0; i < t; i++){
		cin >> n;
		e = 0;
		for(int j = 0; j < n; j++){
			cin >> a;
			if(a%2==0){e++;}
		}
		if((e == n) || ((e == 0) && (n%2==0))){ans[i] = "NO";}
		else{ ans[i] = "YES"; }		
	}
	for(int i=0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
