#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n < 10)
		cout << 1 << endl << n << endl;
	else{
		for(int i = 9; i >= 1; i--){
			if(n%i == 0){
				cout << n/i << endl;
				cout << i;
				for(int j = 1; j < n/i; j++)
					cout << " " << i;
				cout << endl;
				break;
			}
		}
	}
	return 0;
}
