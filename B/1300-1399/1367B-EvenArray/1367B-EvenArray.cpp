#include <iostream>
using namespace std;

int main(){
	int t,n,z,o,m,ok;
	cin >> t;
	int moves[t];
	for(int i = 0; i < t; i++){
		cin >> n;
		int a[n];
		z = o = ok = 0;
		for(int j = 0; j < n; j++){
			cin >> a[j];
			a[j] = a[j]%2;
			if(a[j] != j%2){ ok++; }
			if(a[j] == 0){ z++; }
			else{ o++; }
		}
		if(n%2 == 0){
			if(((n/2) != z) || ((n/2) != o)){ moves[i] = -1; continue; }
		}
		else{
			if(((n/2) > z) || ((n/2) > o)){ moves[i] = -1; continue; }
		}
		if(ok%2 == 0){ moves[i] = ok/2; }
		else{ moves[i] = -1; }
	}
	for(int i = 0; i < t; i++){
		cout << moves[i] << endl;
	}
	return 0;
}
