#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		int pos = n;
		int i = 0,ii = 0;
		int maxP = (2*n);
		string subS[maxP] = {};
		while(pos<maxP){
			subS[i] = s[ii]; 
			pos++;
			i++;
			ii += 2;
		}
		for(int j = 0; j < n; j++){
			cout << subS[j];
		}
		cout << endl;
	}
	return 0;
}
