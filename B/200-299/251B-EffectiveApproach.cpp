#include <iostream>
using namespace std;

int main() {
	long int n, q, p;
	cin >> n;
	long int nm [100001];
	for(int i = 1; i <= n; i++){
		cin >> q;
		nm[q] = i;
	}
	cin >> q;
	long long int sv = 0;
	long long int sp = 0;
	for(int i = 0; i < q; i++){
		cin >> p;
		sv = sv + nm[p];
		sp = sp + (n - nm[p]) + 1;
	}
	cout << sv << " " << sp;
	return 0;
}