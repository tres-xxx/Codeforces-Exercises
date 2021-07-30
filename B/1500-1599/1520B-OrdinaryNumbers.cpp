#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dm = 0;
		int tn = n;
		while(tn > 0){ tn/= 10; dm++;}
		int d = 1; 
		for(int i = 1; i < dm; i++){ d = (d*10)+1; }
		int o = 0;
		while(d > 0){
			o += (n/d);
			tn = 1;
			for(int i = 1; i < dm; i++){ tn*=10; }
			n = tn-1;
			d /= 10;
			dm--;
		}
		cout << o << endl;
	}
	return 0;
}
