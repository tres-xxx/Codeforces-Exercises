/*this is the solution posted by user AliOsm on github.com
https://github.com/AliOsm/CompetitiveProgramming/blob/master/CodeForces/
*/

#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	if(n <= 3){ //one point shared, two circles
		cout << "no" << endl;
		return 0;
	}
	for(int i = 0; i < (n-1); i++){
		//Circle 1;
		int C1min = min(a[i], a[i+1]);
		int C1max = max(a[i], a[i+1]);
		for(int j = 0; j < (n-1); j++){
			int C2min = min(a[j], a[j+1]);
			int C2max = max(a[j], a[j+1]);
			//C1min < C2min < C1max & C2max > C1max
			//C2min < C1min < C2max & C2max < C1max
			if((C1min < C2min && C2min < C1max && C1max < C2max) ||
			   (C2min < C1min && C1min < C2max && C2max < C1max)){
				cout << "yes" << endl;
				return 0;	   
			}
		}
	}
	cout << "no" << endl;
	return 0;
}
