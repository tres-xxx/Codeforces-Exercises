#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long n,k;
	string ans[t];
	for(int i = 0; i < t; i++){
		cin >> n >> k;
		if(k == 1){
			if(n%2 == 1){ ans[i] = "YES"; }
			else{ ans[i] = "NO"; }
		}
		else{
			if(n%2 != k%2){ ans[i] = "NO"; }
			else{
				long long d,n2;
				d = 1;
				n2 = 0;
				long long k2 = 0;
				while(n2 < n && k2 < (k-1)){
					k2++;
					n2+=d;
					d+=2;
				}
				if((k-1) == k2){
					if(n2 >= n){ans[i] = "NO"; }
					else{
						n2 = n-n2;
						if(n2%2 == 1 && n2 >= d){ ans[i] = "YES"; }
						else{ ans[i] = "NO"; }
					}
				}
				else{ ans[i] = "NO"; }
			}
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
