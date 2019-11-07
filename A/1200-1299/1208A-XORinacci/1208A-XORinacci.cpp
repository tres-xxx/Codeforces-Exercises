#include <iostream>
using namespace std;

int main(){
	int t; 
	cin >> t;
	long long a,b,n,f1,f2,ft;
	long long ti[t];
	for(int i = 0; i < t; i++){
		cin >> a >> b >> n;
		/*
		// not a good solution because after the xor operation the number keeps being
		// the same number
		f1 = a;
		f2 = b;
		if(n < 2){
			if(n == 0){
				ti[i] = f1;
			}
			else{
				ti[i] = f2;
			}
		}
		else{
			for(long long j = 1; j < n; j++){
				ft = f2;
				f2 = f2 xor f1;
				f1 = ft;
			}
			ti[i] = f2;
		}*/
		// the next solution is based on the code posted by Waqar-107
		// https://github.com/Waqar-107/Codeforces/blob/master/A-set/1208A.%20Xorinacci.cpp
		ft = a ^ b;
		if((n+1)%3 == 1){
			ti[i] = a;
		}
		else{
			if((n+1)%3 == 2){
				ti[i] = b;
			}
			else{
				ti[i] = ft;
			}
		}

	}
	for(int i = 0; i < t; i++){
		cout << ti[i] << endl;
	}
	return 0;
}
