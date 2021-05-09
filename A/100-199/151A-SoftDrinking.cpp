#include <iostream>
using namespace std;

int main() {
	int n,k,l,c,d,p,nl,np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int amountln = ((k*l)/nl)/n;
	int amountcn = (c*d)/n;
	int amountpn = (p/np)/n;
	if(amountln < amountcn && amountln < amountpn) cout<<amountln;
	else if(amountcn < amountpn && amountcn < amountln) cout<<amountcn;
		else cout << amountpn;
	return 0;
}