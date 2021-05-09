// https://codeforces.com/blog/entry/68111 Codeforces solution
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int q;
	long long e,s,t;
	cin >> q;
	long long a[q];
	for(int i = 0; i < q; i++){
		cin >> e >> s >> t;
		//cout << max(e-s, e-t) + 1 << endl;
		a[i] = max(e-s,e-t) + 1; // solution educational codeforces
		/*if(e == s && e == t){ a[i] = 1; }
		else{
			a[i] = min(s,t)+1;
		}*/
	}
	for(int i = 0; i < q; i++){
		cout << a[i] << endl;
	}
	return 0;
}
