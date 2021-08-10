#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long ai[n*2];
		long odd = 0;
		for(long i = 0; i < (n*2); i++){
			cin >> ai[i];
			if(ai[i]%2 == 1){ odd++; }
		}
		if(odd == n){ cout << "Yes" << endl; }
		else{ cout << "No" << endl; }
	}
	return 0;
}
