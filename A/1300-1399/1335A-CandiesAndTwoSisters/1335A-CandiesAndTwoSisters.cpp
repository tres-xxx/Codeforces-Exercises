#include <iostream>
using namespace std;

int main(){
	long long t,n,i;
	cin >> t;
	long long ans[t];
	for(i = 0; i < t; i++){
		cin >> n;
		if(n%2 != 0){
			ans[i] = n/2; // biggest number for b
		}else{
			ans[i] = (n/2)-1; // biggest number for b
		}
	}
	for(i = 0; i < t; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
