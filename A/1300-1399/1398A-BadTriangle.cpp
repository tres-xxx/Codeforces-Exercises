#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long ai[n];
		for(int i = 0; i < n; i++){ cin >> ai[i]; }
		if((ai[0]+ai[1]) <= ai[n-1]){ cout << "1 2 " << n << endl; }
		else{ cout << "-1" << endl; }
	}
	return 0;
}
