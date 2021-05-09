#include <iostream>

using namespace std;

int main(){
	long t,n,m,a;
	cin >> t;
	long ans[t];
	for(int i = 0; i < t; i++){
		cin >> n >> m;
		a = n*m;
		if(a%2 == 0){ ans[i] = a/2; }
		else{ ans[i] = (a/2)+1; }
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
