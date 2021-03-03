#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	long long int ans[t],moves,s1,s2,m1,m2;
	for(int i = 0; i < t; i++){
		cin >> n;
		moves = 0;
		m1 = m2 = 1000000000;
		int a[n];
		int b[n];
		for(int j = 0; j < n; j++){ cin >> a[j]; if(m1 > a[j]){ m1 = a[j]; }} 
		for(int j = 0; j < n; j++){ cin >> b[j]; if(m2 > b[j]){ m2 = b[j]; }}
		for(int j = 0; j < n; j++){ 
			s1 = a[j]-m1;
			s2 = b[j]-m2;
			moves += (min(s1,s2)) + abs(s1-s2); 
		}
		ans[i] = moves;
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
