#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int d = n/2;
		int c = 1;
		if(n%2 == 0){
			cout << c+1 << " "  << c;
			c = c+2;
		}
		else{
			cout << c+1 << " " << c+2 << " " << c; // 231
			d++;
			c = 4;
		}
		while(c < n){
			cout << " " << c+1 << " "  << c;
			c = c+2;
		}
		cout << endl;
	}
	return 0;
}
