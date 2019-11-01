#include <string>
#include <utility>
#include <iostream>
using namespace std;

int main(){
	int q,n,t,c,m;
	cin >> q;
	string di[q];
	bool gs,dance;
	for(int i = 0; i < q; i++){
		cin >> n;
		dance = true;
		c = 0; // number of changes for gs
		int p[n],pos1;
		for(int j = 0; j < n; j++){
			cin >> p[j];
			if(p[j] == 1){
				pos1 = j;
			}
		}
		if((pos1>0 && p[pos1-1] == 2) || (pos1==0 && p[1] != 2)){
			t = 1;
			for(int j = pos1-1; j >= 0; j--){
				t++;
				if(p[j] != t){
					dance = false;
					break;
				}
			}
			if(dance){
				for(int j = n-1; j > pos1; j--){
					t++;
					if(p[j] != t){
						dance = false;
						break;
					}
				}
			}
		}
		else{
			t = 1;
			for(int j = pos1+1; j < n; j++){
				t++;
				if(p[j] != t){
					dance = false;
					break;
				}
			}
			if(dance){
				for(int j = 0; j < pos1; j++){
					t++;
					if(p[j] != t){
						dance = false;
						break;
					}
				}
			}
		}
		if(dance){
			di[i] = "YES";
		}
		else{
			di[i] = "NO";
		}
	}
	for(int i = 0; i < q; i++){
		cout << di[i] << endl;
	}
	
	return 0;
}
