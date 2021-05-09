#include <iostream>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	int ans[t];
	for(int i = 0; i < t; i++){
		cin >> n;
		ans[i] = n/2;
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
