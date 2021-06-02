#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	int di[t];
	for(int i = 0; i < t; i++){
		cin >> n;
		int a[n];
		int n1,n2;
		n1 = n2 = 0;
		cin >> a[0];
		for(int j = 1; j < n; j++){ 
			cin >> a[j]; 
			if(a[j] != a[0]){ n2 = j; }
		}
		if(n2 == 1){
			if(a[2] == a[0]){ di[i] = n2+1;}
			else{ di[i] = 1; }
		}
		else{
			if(a[1] == a[0]){ di[i] = n2+1; }
			else{ di[i] = 1; }
		}
	}
	for(int i = 0; i < t; i++){ cout << di[i] << endl;}
	return 0;
}
