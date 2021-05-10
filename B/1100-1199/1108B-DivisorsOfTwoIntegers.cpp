#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int di[n];
	for(int i = 0; i < n; i++) cin >> di[i];
	sort(di,di+n);
	int x,y=0;
	x = di[n-1];
	int even = x,pos=-1;
	for(int i = n-2; i >= 0; i--){
		if(x%di[i] != 0){
			y = di[i];
			break;
		}
		if(pos == -1){
			if(even == di[i]) pos = i;
			else even = di[i];
		}
	}
	if(y == 0) y = di[pos];
	cout << x << " " << y << endl;
	return 0;
}
