#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int q;
	cin >> q;
	long long ansq[q];
	long long n,a,b,ans1,ans2;
	for(int i = 0; i < q; i++){
		cin >> n >> a >> b;
		ans1 = n*a;
		if(n%2 == 0) ans2 = (n/2)*b;
		else ans2 = ((n/2)*b)+a;
		ansq[i] = min(ans1,ans2);
	}
	for(int i = 0; i < q; i++) cout << ansq[i] << endl;
	return 0;
}
