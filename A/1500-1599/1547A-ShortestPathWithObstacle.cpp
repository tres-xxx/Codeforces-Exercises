#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	int ans[t];
	for(int i = 0; i < t; i++){
		int a[2],b[2],f[2];
		cin >> a[0] >> a[1];
		cin >> b[0] >> b[1];
		cin >> f[0] >> f[1];
		if(a[0] == b[0]){
			ans[i] = max(a[1],b[1])-min(a[1],b[1]);
			if(f[0] == a[0] and f[1] < max(b[1],a[1]) and f[1] > min(b[1],a[1])){ ans[i] += 2; }
		}
		else{
			if(a[1] == b[1]){
				ans[i] = max(a[0],b[0])-min(a[0],b[0]);
				if(f[1] == a[1] and f[0] < max(a[0],b[0]) and f[0] > min(b[0],a[0])){ ans[i] += 2; }
			}
			else{
				ans[i] = max(a[0],b[0])-min(a[0],b[0]);
				ans[i] += (max(a[1],b[1])-min(a[1],b[1]));
			}
		}
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
