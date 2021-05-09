// based on the solution posted in https://github.com/Waqar-107/Codeforces/blob/master/A-set/1102A.Integer%20Sequence%20Dividing.cpp

#include <math.h>
#include <iostream>
using namespace std;

int main(){
	long long n,sum;
	cin >> n;
	sum = (pow(n,2)+n)/2;
	if(sum%2 == 0) cout << "0";
	else cout << "1";
	cout << endl;
	return 0;
}
