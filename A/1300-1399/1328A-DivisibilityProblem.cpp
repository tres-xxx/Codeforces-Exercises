#include <iostream>
using namespace std;

int main(){
	int t,a,b,n;
	cin >> t;
	int ans[t];
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		n = a%b;
		if(n != 0){
			ans[i] = b-n;
		}
		else{
			ans[i] = 0;
		}
	}
	for(int i = 0; i < t; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
