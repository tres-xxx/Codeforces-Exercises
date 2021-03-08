#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long int ans[t],n,m;
	for(int i = 0; i < t; i++){
		cin >> n >> m;
		if(n < 3){
			if(n == 1){ ans[i] = 0; }
			else{
				if(n == 2){ ans[i] = m; }
			}
		}
		else{ ans[i] = m*2; }
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
