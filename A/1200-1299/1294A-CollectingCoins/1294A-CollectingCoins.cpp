#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string ans[t];
	long long int a,b,c,n,m,m2;
	for(int i = 0; i < t; i++){
		cin >> a >> b >> c >> n;
		m = max(max(a,b),c);
		m2 = (m-a)+(m-b)+(m-c);
		if(m2 <= n){
			if((n-m2)%3 == 0){ ans[i] = "YES"; }
			else{ ans[i] = "NO"; }
		}
		else{ ans[i] = "NO"; }
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
