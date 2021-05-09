/**
This is the solution posted by user codejoydo on github.com
https://github.com/codejoydo/codeforces/blob/master/573a.cpp
**/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		//¿if there is a minimum number in which all are connected
		//then it's possible to 'touch' that number in the future?
		while(a[i]%2 == 0) a[i] /= 2;
		while(a[i]%3 == 0) a[i] /= 3;
	}
	for(int i = 0; i < n-1; i++){
		if(a[i] != a[i+1]){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
