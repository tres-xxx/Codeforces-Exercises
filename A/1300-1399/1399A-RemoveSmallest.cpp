#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string ans[t];
	for(int i = 0; i < t; i++){
		ans[i] = "-";
		int n;
		cin >> n;
		int a[n];
		for(int j = 0; j < n; j++){ cin >> a[j];}
		sort(a,n+a);
		for(int j = 0; j < n-1; j++){
			if((a[j+1]-a[j]) > 1){ ans[i] = "NO";break;}
		}
		if(ans[i] != "NO"){ans[i] = "YES";}
	}
	for(int i = 0; i < t; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
