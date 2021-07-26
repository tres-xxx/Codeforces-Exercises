#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t){
		int n,m;
		cin >> n >> m;
		int ai[n],bi[m];
		string ans = "f";
		int num = -1;
		for(int i = 0; i < n; i++){ cin >> ai[i]; }
		for(int i = 0; i < m; i++){ 
			cin >> bi[i]; 
			if(ans == "f"){
				for(int j = 0; j < n; j++){
					if(ai[j] == bi[i]){
						ans = "YES";
						num = ai[j];
						break;
					}
				}
			}
		}
		if(ans == "YES"){ cout << ans << endl << "1 " << num << endl; }
		else{ cout << "NO" << endl; }
		t--;
	}
	return 0;
}
