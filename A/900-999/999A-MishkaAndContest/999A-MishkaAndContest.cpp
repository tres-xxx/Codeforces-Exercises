#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int maxS=0;
	//pair <int, bool> ai[n];
	int ai[n];
	for(int i = 0; i < n; i++){
	 	//cin >> ai[i].first;
	 	//ai[i].second = false;
	 	cin >> ai[i];
	}
	/**
	bool left,right;
	left = right = true;
	for(int l = 0,r = n-1; l < n && r >= 0 && ai[l].second != true && ai[r].second != true && (right || left);){
		if(!ai[l].second && left && l < r){
			if(k >= ai[l].first){ 
				maxS++;
			}
			else left = false;
		}
		l++;
		if(!ai[r].second && right && r > l){
			if(k >= ai[r].first){ 
				maxS++;
				r--;
			}
			else right = false;
		}
		r--;
	}**/
	int l,r;
	l = 0; r = n-1;
	for(; l <= r; l++){
		if(ai[l] <= k) maxS++;
		else break;
	}
	for(; r >= l; r--){
		if(ai[r] <= k) maxS++;
		else break;
	}
	cout << maxS << endl;
	return 0;
}
