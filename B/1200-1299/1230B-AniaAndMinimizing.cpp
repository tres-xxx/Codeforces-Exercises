#include <string>
#include <iostream>
using namespace std;

int main(){
	int n,k,t;
	cin >> n >> k;
	string s;
	cin >> s;
	t = k;
	if(n == 1){
		if(k != 0){ cout << 0 << endl; }
		else{ cout << s << endl; }
	}
	else{
		for(int i = 0; i < t && i < n; i++){
			if(s[i] == '0'){
				t++;
			}
			if(i == 0){
				if(s[i] == '1'){ t++; }
				else{ s[i] = '1'; }
			}
			else{ s[i] = '0'; }
			//s[i] = (i!=0) ? '0':'1';
		}
		cout << s << endl;
	}
	return 0;
}
