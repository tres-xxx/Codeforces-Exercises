#include <iostream>
using namespace std;

int main(){
	int q;
	cin >> q;
	long long out [q] = {};
	for(int i = 0; i < q; i++){
		long long n,c;
		cin >> n;
		if(n%2 != 0 && n%3 != 0 && n%5 != 0 && n != 1){
			out[i] = -1; 
			continue;
		}
		c = 0;
		while(n!=1){
			c++;
			if(n%2==0){
				n=n/2;
				continue;
			}
			if(n%3==0){
				n=(n*2)/3;
				continue;
			}
			if(n%5==0){
				n=(n*4)/5;
				continue;
			}
			// Error!
			c = -1;
			break;
		}
		out[i] = c;
	}
	for(int i = 0; i < q; i++){
		cout << out[i] << endl;
	}
	return 0;
}
