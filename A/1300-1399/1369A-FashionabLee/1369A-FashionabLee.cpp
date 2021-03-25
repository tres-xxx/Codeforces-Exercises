#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string ans[t];
	long long int n;
	for(int i = 0; i < t; i++){
		cin >> n;
		ans[i] = (n%4 == 0) ? "YES" : "NO";
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
