#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		int n, ai; 
		int mn = 1000000000;
		int mx = -1;
		cin >> n;
		for (int j = 0; j < n; j++){
			cin >> ai;
			mn = min(ai,mn);
			mx = max(ai,mx);
		}
		cout << mx-mn << endl;
	}
	return 0;
}
