#include <iostream>
using namespace std;

int main(){
	long long int x,y,n,t,i,md1;
	cin >> t;
	long long int ans[t];
	for(i=0; i < t; i++){
		cin >> x >> y >> n;
		md1 = n%x;
		if(md1 == y){ ans[i] = n;}
		else{
			if(md1 > y){ ans[i] = n - (md1-y);}
			else{ ans[i] = n-md1-(x-y); }
		}
	}
	for(i=0; i < t; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
