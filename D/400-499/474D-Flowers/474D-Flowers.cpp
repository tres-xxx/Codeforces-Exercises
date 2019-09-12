// As always I didn't understand the task to do.

// solution from http://www.voidcn.com/article/p-hvnujudg-th.html
// and from https://blog.csdn.net/kenden23/article/details/47816121

#include <iostream>
using namespace std;

int main(){
	int t,k;
	const int modu = (int)1e9+7;
	const int max_m = (int)1e5+1;
	cin >> t >> k;
	int tbl[max_m] = {}; // empty array
	for(int i = 0; i < k; i++) tbl[i] = 1;
	for(int i = k; i < max_m; i++){
		tbl[i] = tbl[i-1] + tbl[i-k];
		tbl[i] %= modu;
	}
	int sum[max_m] = {};
	sum[0] = 0;
	for(int i = 1; i < max_m; i++){
		sum[i] = sum[i-1] + tbl[i];
		sum[i] %= modu;
	}
	int a,b;
	int result[t] = {};
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		//cout << "b " << sum[b] << endl;
		//cout << "a " << sum[a-1] << endl;
		result[i] =  (sum[b]-sum[a-1]+modu)%modu;
	}
	for(int i = 0; i < t; i++) cout << result[i] << endl;
	return 0;
}
