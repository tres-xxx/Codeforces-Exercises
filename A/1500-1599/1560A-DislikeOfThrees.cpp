#include <iostream>
using namespace std;
int main(){
	int t,k,ans,pos;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> k;
		pos = 1;
		for(int j = 1; ; j++){
			if(j%10 != 3 and j%3 != 0){ 
				if(pos < k){ pos++; }
				else{ ans = j; break; }
			}
		}
		cout << ans << endl;
	}	
	return 0;
}
