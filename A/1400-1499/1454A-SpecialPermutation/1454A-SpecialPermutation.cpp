#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t > 0){
		cin >> n;
		cout << n;
		for(int i = 1; i < n; i++){ cout << " " << i; }
		cout << endl;
		t--;
	}
	return 0;
}
