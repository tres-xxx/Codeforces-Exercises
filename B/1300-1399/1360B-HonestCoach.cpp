#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t,n,min,op,i;
	cin >> t;
	int ans[t];
	for(i=0; i < t; i++){
		cin >> n;
		int ath[n];
		for(int j=0; j < n; j++){cin >> ath[j];}
		sort(ath,ath+n);
		min = ath[n-1];
		for(int j=0; (j < n-1) && min != 0; j++){
			op = ath[j+1]-ath[j];
			if(op < min){min = op;}
		}
		ans[i] = min;
	}
	for(i=0; i < t; i++){ cout << ans[i] << endl;}
	return 0;
}
