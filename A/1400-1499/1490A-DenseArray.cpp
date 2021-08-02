#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ai[n];
		cin >> ai[0];
		int dense = 0;
		for(int i = 1; i < n; i++){ 
			cin >> ai[i];
			int b,s;
			if(ai[i-1] > ai[i]){ b = ai[i-1]; s = ai[i]; }
			else{ s = ai[i-1]; b = ai[i]; }
			//int div = b/s;
			//cout << div << endl;
			//if(div > 2){
			int ts = s*2;
			if(ts < b){
				//int ts = s;
				while(ts < b){
					dense++;
					ts *= 2;
				}
			}
		}
		cout << dense << endl;
	}
	return 0;
}
