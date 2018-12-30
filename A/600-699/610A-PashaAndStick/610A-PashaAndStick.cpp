/**
this is the solution posted by user codejoydo in github.com
https://github.com/codejoydo/codeforces/blob/master/610a.cpp
**/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n & 1) cout << 0 << endl; //there is no rectangle
	else{
		int m = n/2;
		if(m & 1) cout << m/2 << endl;
		else cout << (m/2) - 1 << endl;
	}
	return 0;
}
