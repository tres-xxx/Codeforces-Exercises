#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long int ans[t],a,b,s;
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		if(a == b){ ans[i] = 0; continue; }
		else{
			if(a > b){ s = a-b; }
			else{ s = b-a; }
			ans[i] = (s/10) + (((s%10) != 0) ? 1 : 0);		
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl;}
	return 0;
}
