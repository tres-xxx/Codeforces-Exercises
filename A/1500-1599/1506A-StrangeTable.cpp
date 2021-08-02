#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n,m,x,r,c,pos;
		cin >> n >> m >> x;
		r = x%n;
		c = x/n;
		if(r == 0){ r = n; }
		else{ c++; }
		r--;
		pos = (m*r)+c;
		cout << pos << endl;
	}
	return 0;
}
