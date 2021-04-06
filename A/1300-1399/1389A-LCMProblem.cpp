#include <iostream>
using namespace std;

int main(){
	long long t,l,r,i,l2;
	cin >> t;
	long long xt[t], yt[t];
	for(i = 0; i < t; i++){
		cin >> l >> r;
		l2 = l*2;
		if(l2 <= r){ xt[i] = l; yt[i] = l2; }
		else{ xt[i] = -1; yt[i] = -1; }
	}
	for(i = 0; i < t; i++){ cout << xt[i] << " " << yt[i] << endl;}
	return 0;
}
