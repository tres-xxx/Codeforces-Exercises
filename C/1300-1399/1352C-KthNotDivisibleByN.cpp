#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long int ans[t], n,k,d,m,m2,m3;
	for(int i = 0; i < t; i++){
		cin >> n >> k;
		d = n-1;
		m = k/d;
		if(k%d == 0){ m2 = (m-1)*n; }
		else{ m2 = m*n; }
		if(n < k){ 
			if(k%d == 0){ ans[i] = m2 + d; }
			else{ ans[i] = m2+(k%d);  }
		}
		else{
			if(k == n){ ans[i] = n+1; }
			else{ ans[i] = k; }
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
