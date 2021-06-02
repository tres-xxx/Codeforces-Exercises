#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long int ans[t],n;
	for(int i = 0;i < t; i++){
		cin >> n;
		ans[i] = n; //?
	}
	for(int i = 0;i < t; i++){cout << ans[i] << endl;}
	return 0;
}
