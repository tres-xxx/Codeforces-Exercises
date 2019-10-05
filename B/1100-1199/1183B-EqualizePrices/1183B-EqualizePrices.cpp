#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int q;
	cin >> q;
	long long ai[q],n,k,maxA,minA,t;
	//bool find = false;
	for(int i = 0; i < q; i++){
		cin >> n >> k;
		//long long ak[n];
		maxA = 0;
		minA = 100000000;
		for(long long j = 0; j < n; j++){
			//cin >> ak[j];
			cin >> t;
			maxA = max(t,maxA);
			minA = min(t,minA);
			//cout << minA-k << " " << maxA-k << endl;
		}
		//cout << minA-k << " " << maxA-k << endl;
		if(abs(minA+k) >= abs(maxA-k)){
			ai[i] = minA+k;
		}
		else{ ai[i] = -1; }
		/*for(long long j = maxA+k; j >= minA-k; j--){
			if(abs(maxA-j)<=k && abs(minA-j)<=k){
				ai[i] = j;
				find = true;
				break;
			}
		}*/
		//if(!find){ ai[i] = -1;}
		//find = false;
	}
	for(int i = 0; i < q; i++){
		cout << ai[i] << endl;
	}
	return 0;
}
