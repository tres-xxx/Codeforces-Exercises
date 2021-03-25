#include <iostream>
using namespace std;

int main(){
	int t,n,c,l,r;
	cin >> t;
	int ans[t];
	for(int i = 0; i < t; i++){
		cin >> n;
		char s[n];
		c = l = r = 0; // l = ( | r = )
		for(int j = 0; j < n; j++){ 
			cin >> s[j]; 
			if(s[j] == '('){ l++; }
			if(s[j] == ')'){ r++; }
			if(l < r){ c++; r--; }
			if(l > r and r > 0){ l--; r--; }
		}
		ans[i] = c;		
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
