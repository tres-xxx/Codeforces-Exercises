/*
Based on the solution from https://ahtonmoy.blogspot.com/2020/07/codeforces-1374b-multiply-by-2-divide.html
*/
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	int ans[t];
	long long int n;
	int moves;
	for(int i = 0; i < t; i++){
		moves = 0;
		cin >> n;
		while(n%6 == 0){ n/=6; moves++; } // Divisible by 6
		while(n%3 == 0){ n/=3; moves+=2; } // Divislbe by 3 -> (1)n*2 (2)n/6
		if(n == 1){ ans[i] = moves; }
		else{ ans[i] = -1; }
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
