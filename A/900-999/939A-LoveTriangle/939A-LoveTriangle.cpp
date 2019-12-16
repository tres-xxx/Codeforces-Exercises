#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int l[n+1];
	bool f = false;
	for(int i = 1; i <= n; i++){ cin >> l[i]; } 
	for(int i = 1; i <= n; i++){
		if(l[l[l[l[i]]]] == l[i] && l[l[l[i]]] != l[i]){
			f = true;
			break;
		}
	}
	if(f){ cout << "YES"; }
	else{ cout << "NO"; }
	cout << endl;
	return 0;
}
