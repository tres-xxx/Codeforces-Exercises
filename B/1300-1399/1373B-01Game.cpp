#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t,o,z;
	cin >> t;
	string ans[t],s;
	for(int i = 0; i < t; i++){
		cin >> s;
		o = z = 0;
		for(int j = 0; j < s.size(); j++){
			if(s[j] == '0'){ z++; }
			else{ o++; }
		}
		if(min(o,z)% 2 == 1){ ans[i] = "DA"; }
		else{ ans[i] = "NET"; }
		
	}
	for(int i = 0; i < t; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
