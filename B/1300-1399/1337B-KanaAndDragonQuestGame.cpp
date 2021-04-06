#include <iostream>
using namespace std;

int main(){
	int t,i,x,n,m;
	cin >> t;
	string ans[t];
	for(i = 0; i < t; i++){
		cin >> x >> n >> m;
		while(x>0 && n>=0 && m>=0){
			if(x > 20 && n > 0){ x=(x/2)+10; n--; }
			else{
				if(m > 0){ x-=10; m--;}
				else{break;}
			}
		}
		if(x>0){ ans[i] = "NO"; }
		else{ ans[i] = "YES"; }
	}
	for(i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
