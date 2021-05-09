#include <iostream>
using namespace std;

int main(){
	int x,a,b;
	cin >> x;
	/*if(x < 4){
		cout << "-1";
	}
	else{
		if(x%2 == 0){
			cout << x << " " << x/2;
		}
		else{
			cout << x-1 << " " << (x-1)/2;
		}
	}*/
	if(x > 1){
		cout << x << " " << x;
	}
	else{
		cout << "-1";
	}
	cout << endl;
	return 0;
}
