#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long ans[t],n;
	for(int i = 0; i < t; i++){
		cin >> n;
		if(n <= 2){ ans[i] = --n; continue;}
		long long mod2 = 2;
		while(mod2 < n){ mod2 *= 2; }
		if(mod2 != n){ mod2 /= 2; }
		ans[i] = --mod2;		
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
