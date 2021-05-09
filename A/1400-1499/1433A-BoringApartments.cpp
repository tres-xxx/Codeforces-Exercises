#include <iostream>
using namespace std;

int main(){
	int t,x,d,dv;
	cin >> t;
	int ans[t];
	for(int i=0; i<t; i++){
		cin >> x;
		d = 1;
		dv = x;
		while(dv > 10){ d++; dv/=10; }
		ans[i] = (((x%10)-1)*10); //1-2-3-4...
		for(;d>0; d--){ ans[i] += d; }
	}
	for(int i=0; i<t; i++){ cout << ans[i] << endl; }
	return 0;
}
