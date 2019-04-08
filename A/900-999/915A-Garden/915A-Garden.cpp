#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int ai[n];
	for(int i = 0; i < n; i++) cin >> ai[i];
	sort(ai,ai+n);
	int best;
	for(int i = n-1; i >= 0; i--){
		if(k % ai[i] == 0){
			best = ai[i];
			break;
		}
	}
	cout << k/best << endl;
	return 0;
}
