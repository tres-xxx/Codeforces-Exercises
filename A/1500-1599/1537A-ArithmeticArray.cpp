#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int ai[n];
		long long s = 0;
		for(int i = 0; i < n; i++){ cin >> ai[i]; s+= ai[i]; }
		if(s == n){ cout << 0;}
		else{
			if(s < n){ cout << 1; }
			else{ cout << s-n; }
		}
		cout << endl;		
	}
	return 0;
}
