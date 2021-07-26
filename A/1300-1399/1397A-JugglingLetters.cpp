#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int alpha[26] = {};
		int n;
		cin >> n;
		string si[n];
		for(int i = 0; i < n; i++){ 
			cin >> si[i];
			for(int j = 0; j < si[i].size(); j++){ alpha[si[i][j]-97]++; }
		}
		bool zero = true;
		for(int i = 0; i < 26; i++){ if(alpha[i] % n != 0){ zero = false; break; }}
		if(zero){ cout << "YES" << endl; }
		else{ cout << "NO" << endl; }
	}
	return 0;
}
