#include <iostream>
using namespace std;

int main(){
	int t,n,n2; 
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		int pp[n*2];
		int p[n];
		for(int j = 0; j < n*2; j++){cin >> pp[j];}
		p[0] = pp[0];
		n2 = 1;  // first elment
		for(int j = 1; j < n*2; j++){
			bool diff = true;
			for(int k = 0; k < n2; k++){ if(pp[j] == p[k]){ diff = false; break; }}
			if(diff){ p[n2] = pp[j]; n2++; } // next element
		}
		cout << p[0];
		for(int j = 1; j < n; j++){ cout << " " <<  p[j]; }
		cout << endl;
	}
	return 0;
}
