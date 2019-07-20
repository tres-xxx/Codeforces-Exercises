#include <iostream>
using namespace std;

int main(){
	long long t,i,s,a,b,c;
	cin >> t;
	long long ans[t];
	for(i = 0;t>0;t--){
		ans[i] = 0;
		cin >> s >> a >> b >> c;
		ans[i] += ((((s/c)/a)*b)+(s/c));
		i++;
	}
	for(; t < i; t++) cout << ans[t] << endl;
	return 0;
}
