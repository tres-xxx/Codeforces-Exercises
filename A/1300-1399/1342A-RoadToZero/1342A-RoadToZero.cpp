#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long ans[t],x,y,a,b,mi,ma;
	for(int i = 0; i < t; i++){
		cin >> x >> y >> a >> b;
		if((b/2)>=a){ans[i] = (x+y)*a;}
		else{
			mi = min(x,y);
			ma = max(x,y);
			ans[i] = (mi*b)+((ma-mi)*a);
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
