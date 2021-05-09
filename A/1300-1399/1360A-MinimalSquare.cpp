//#include <math.h>
//#include <algorithm.h>
#include <iostream>
using namespace std;

int main(){
	int t; // n test
	cin >> t;
	int ans[t];
	int a,b,mi,ma,mu; // mi = min | ma = max || mu = turn it a square
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		if(a > b){
			mi = b*2; ma = a;
		}
		else{
			mi = a*2; ma = b;
		}
		if(mi < ma){ mu = ma; }
		else{ mu = mi; }
		ans[i] = mu*mu;
	}
	for(int i =0; i < t; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
