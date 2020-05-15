// I did not find the solution by myself, the explanation of the problem is really easy
// https://codeforces.com/topic/71964/en3
// So far, there are just thre problematic numbers (1,2,3) any other number is reachable.
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string ans[t];
	long long x,y;
	for(int i = 0; i < t; i++){
		cin >> x >> y;
		if(x > 3){ ans[i] = "Yes"; continue;}
		if((x == 1 && y == 1) || (x != 1 && y <= 3)){ ans[i] = "Yes"; }
		else{ ans[i] = "No";}
	}
	for(int i = 0; i < t; i++){
		cout << ans[i] << endl;
	}
	return 0;
}


