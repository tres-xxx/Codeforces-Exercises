// I thought divide each number was not the best solution because of the
// time, but it seems that was one of the possible solutions
// Based on the next code: https://github.com/Waqar-107/Codeforces/blob/master/A-set/1228A.%20Distinct%20Digits.cpp

#include <iostream>
using namespace std;

int main(){
	int l,r,t;
	cin >> l >> r;
	bool f = true;
	for(int i = l; i <= r; i++){
		t = i;
		int d[10] = {0};
		f = true;
		while(t>0){
			d[t%10]++;
			if(d[t%10] > 1){
				f = false;
				break;
			}
			t/=10;
		}
		if(f){
			cout << i << endl;
			break;
		}
	}
	if(!f){
		cout << "-1" << endl;
	}
	return 0;
}
