#include <iostream>
using namespace std;

int main(){
	int t,m,h; 
	cin >> t;
	int ans[t];
	for(int i = 0; i < t; i++){ 
		cin >> h >> m;
		ans[i] = (m!=0)?(60-m)+((24-(h+1))*60):(24-h)*60;
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
