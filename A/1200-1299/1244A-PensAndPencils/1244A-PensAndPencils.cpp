#include <iostream>
using namespace std;

int main(){
	int t,a,b,c,d,k,pc,pn,s;
	cin >> t;
	int ti[t*2];
	for(int i = 0; i < t; i++){
		cin >> a >> b >> c >> d >> k;
		pn = a/c;
		if(a%c != 0){
			pn++;
		}
		pc = b/d;
		if(b%d != 0){
			pc++;
		}
		s = pn+pc;
		if(s <= k){
			ti[i*2] = pn;
			ti[(i*2)+1] = pc;
		}
		else{
			ti[i*2] = -1;
			ti[(i*2)+1] = -1;
		}
	}
	for(int i = 0; i < t; i++){
		if(ti[i*2] != -1){
			cout << ti[i*2] << " " << ti[(i*2)+1] << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;
}
