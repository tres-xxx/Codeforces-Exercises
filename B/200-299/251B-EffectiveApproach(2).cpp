#include <iostream>
using namespace std;

int main() {
	long int n, q;
	cin >> n;
	long int nm [n];
	for(int i = 0; i < n; i++) cin >> nm[i];
	cin >> q;
	long int qm [q];
	for(int i = 0; i < n; i++) cin >> qm[i];
	long long int sv = 0;
	long long int sp = 0;
	for(int i = 0; i < q; i++){
		int jj = n-1;
		int infoO = 1;
		int infoS = 0;
		for(int j = 0; infoO != infoS; j++){
			if(nm[j] == qm[i] && infoO == 1){
				sv = sv + (j+1);
				if(infoS == 2) infoO = infoS;
				else infoO = 2;
			} 
			if(nm[jj] == qm[i] && infoS == 0){
				sp = sp + (n-jj);
				if(infoO == 2) infoO = infoS;
				else infoS = 2;
			} 
			jj--;
		}
	}
	cout << sv << " " << sp;
	return 0;
}
