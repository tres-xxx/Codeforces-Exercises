#include <iostream>
using namespace std;

int main(){
	int t = 0; 
	cin >> t;
	while (t--){
		int a,bcd,f;
		cin >> a;
		f = 0;
		for(int i = 0; i < 3; i++){
			cin >> bcd;
			if (bcd > a){ f++; }
		}
		cout << f << endl;
	}
	return 0;
}
