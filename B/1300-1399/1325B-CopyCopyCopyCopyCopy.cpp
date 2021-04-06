#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	long long t,i,j,n,c,count;
	cin >> t;
	long long ans[t];
	for(i = 0; i < t; i++){
		cin >> n;
		long long a[n];
		for(j = 0; j < n; j++){cin >> a[j];}
		sort(a, a+n);
		c = a[0]; // at least one
		count = 1; 
		for(j = 1; j < n; j++){ if(c!=a[j]){ count++; c=a[j]; } }
		ans[i] = count; 
	}
	for(i = 0; i < t; i++){ cout << ans[i] << endl;}
	return 0;
}
