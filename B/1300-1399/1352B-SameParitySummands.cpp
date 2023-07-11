#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		long long n,k,m,r;
		cin >> n >> k;
		if(n == k){ 
			cout << "YES" << endl; 
			for(int j=0;j<(k-1);j++){cout << "1 ";}
			cout << "1" << endl; continue;
		}
		//if(k > (n/2)){cout << "NO" << endl; continue;}
		// Even
		m = (k-1)*2;
		if(m < n){
			r = n-m;
			if(r%2 == 0){
				cout << "YES" << endl;
				for(int j = 0; j < (k-1); j++){ cout << "2 "; }
				cout << r << endl; continue;
			}
		}
		// Odd
		m = k-1;
		r = n-m;
		if(r%2 == 1){
			cout << "YES" << endl;
			for(int j = 0; j < m; j++){ cout << "1 "; }
			cout << r << endl;
		}
		else{ cout << "NO" << endl; }
	}
	return 0;
}
