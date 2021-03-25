#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string ans[t];
	long long int n,d,h;
	for(int i = 0; i < t; i++){
		cin >> n;
		while(n>1){
			if(n%2 == 1){break;}
			n/=2;
		}
		if(n>1){ans[i]="YES";}
		else{ans[i] = "NO";}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl;}
	return 0;
}
