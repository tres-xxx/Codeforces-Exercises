#include <climits>
#include <iostream>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long smn=LLONG_MAX,smx=LLONG_MIN,amn=0,amx=0,t;
	for(int i = 0; i < n; i++){
		cin >> t;
		if(t < smn){
			smn = t;
			amn = 1;
		}
		else{
			if(t == smn) amn++;
		}
		if(t > smx){
			smx = t;
			amx = 1;
		}
		else{
			if(t == smx) amx++;
		}
	}
	if(smn == smx) cout << "0";
	else cout << n-(amn+amx);
	cout << endl;
	return 0;
}
