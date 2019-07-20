#include <iostream>
using namespace std;

int main(){
	int q,i=0;
	cin >> q;
	long ans[q],l,r,d;
	while(q != 0){
		cin >> l >> r >> d;
		if(l > d) ans[i] = d;
		else{
			if(r%d == 0) ans[i] = r+d;
			else ans[i] = r + (d-(r%d));
		}
		q--;
		i++;
	}
	for(;q < i; q++) cout << ans[q] << endl;
	return 0;
}
