#include <iostream>
using namespace std;

int main(){
	int t = 0;
	cin >> t;
	while (t--){
		long a,b;
		cin >> a >> b;
		if (a > 0){ cout << a+(b*2)+1;}
		else{ cout << "1"; }
		cout << endl;
	}
	return 0;
}

