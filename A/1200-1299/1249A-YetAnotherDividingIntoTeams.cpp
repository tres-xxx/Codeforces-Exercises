#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int q,n;
	cin >> q;
	int d[q];
	bool two;
	for(int i = 0; i < q; i++){
		cin >> n;
		int ai[n];
		for(int j = 0; j < n; j++){
			cin >> ai[j];
		}
		sort(ai,ai+n);
		two = false;
		for(int j = 1; j < n; j++){
			if((ai[j]-ai[j-1]) == 1){
				two = true;
				break;
			}
		}
		if(two){
			d[i] = 2;
		}
		else{
			d[i] = 1;
		}
	}
	for(int i = 0; i < q; i++){
		cout << d[i] << endl;
	}
	return 0;
}
