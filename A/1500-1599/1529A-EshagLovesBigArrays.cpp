#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,ai;
		cin >> n;
		int an[102] = {};
		for(int i = 0; i < n; i++){
			cin >> ai;
			an[ai]++;
		}
		int fm = 0;
		for(int i = 1; i <= 100; i++){
			if(an[i] != 0){ 
				fm = i;
				break;
			}
		}
		cout << n - an[fm] << endl;
	}
	return 0;
}
