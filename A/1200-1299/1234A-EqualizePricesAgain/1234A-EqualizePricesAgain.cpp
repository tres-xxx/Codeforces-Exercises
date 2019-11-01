#include <iostream>
using namespace std;

int main(){
	int q,n,s,t;
	cin >> q;
	int ans[q];
	for(int i = 0; i < q; i++){
		cin >> n;
		s = 0;
		for(int j = 0; j < n; j++){
			cin >> t;
			s += t;
		}
		ans[i] = (s%n==0) ? s/n : (s/n)+1;
	}
	for(int i = 0; i < q; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
