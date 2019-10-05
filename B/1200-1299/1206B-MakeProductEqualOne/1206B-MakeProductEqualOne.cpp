#include <algorithm>
#include <math.h>
#include <iostream>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long an[n];
	long long ne = 0, coins = 0;
	bool zero = false;
	for(int i = 0; i < n; i++){
		cin >> an[i];
		if(an[i] < 0){ ne++; }
		if(an[i] == 0){ zero = true;}
		coins += abs((abs(an[i])-1));
	}
	if(ne%2 != 0){
		if(!zero){
			coins += 2;
		}
	}
	cout << coins << endl;
	return 0;
}
