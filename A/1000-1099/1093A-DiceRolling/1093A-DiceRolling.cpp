#include <iostream>
using namespace std;

int main(){
	int t,i,x;
	cin >> t;
	int ans[t];
	for(i=0;t > 0; t--,i++){
		cin >> x;
		ans[i] = ((x/7) + ((x%7==0) ? 0 : 1));
	}
	for(;t < i; t++) cout << ans[t] << endl;
	return 0;
}
