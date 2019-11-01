#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long xr[t];
	long long x,n;
	for(int i = 0; i < t; i++){
		cin >> n >> x;
		xr[i] = 2*x;
	}
	for(int i = 0; i < t; i++){
		cout << xr[i] << endl;
	}
	return 0;
}
