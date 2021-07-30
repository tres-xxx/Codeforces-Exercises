#include <iostream>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ai[n];
		int l,r;
		l = r = -1;
		for(int i = 0; i < n; i++){ 
			cin >> ai[i];
			if(ai[i] == 1){
				if(r == -1){
					l = i;
					r = l;
				}
				else{ r = i; } 
			}
		}
		if(r == l){ cout << "0" << endl; continue; }
		int countZ = 0;
		for(int i = l+1; i < r; i++){
			if (ai[i] == 0){ countZ++; }
		}
		cout << countZ << endl;
	}
	return 0;
}
