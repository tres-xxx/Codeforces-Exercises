#include <iostream>
using namespace std;

int main(){
	int t,n,x;
	cin >> t;
	long long ans[t];
	for(int i = 0; i < t; i++){
		cin >> n >> x;
		if(n <= 2){
			ans[i] = 1;
		}
		else{
			int pos = 2;
			int temp = x;
			x+=2;
			while(x<n){
				x += temp;
				pos++;
			}
			ans[i] = pos;
		}
	}
	for(int i = 0; i < t; i++){
		cout << ans[i] << endl;
	}	
	return 0;
}
