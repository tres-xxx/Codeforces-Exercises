#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	int ans[t];
	long long int a,b;
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		if(a == b){ ans[i] = 0; }
		else{
			if(b < a){
				if((a%2) == (b%2)){ ans[i] = 1; } // a-y || 'y' is even
				else{ ans[i] = 2; }
			}
			else{
				if((a%2) != (b%2)){ ans[i] = 1; } // a+y || 'y' is odd
				else{ ans[i] = 2; }
			}
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
