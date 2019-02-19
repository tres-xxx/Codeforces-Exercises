/**
solution from http://codeforces.com/contest/359/submission/4968279
**/

#include <iostream>
using namespace std;

int main(){
	int n,m,a;
	cin >> n >> m;
	bool isTwo = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a;
			if(a == 1){
				//It is in the border?
				if((i==0 || i==(n-1)) || (j==0 || j==(m-1))){
					isTwo = 1;
				}
			}
		}
	}
	if(isTwo) cout << 2 << endl;
	else cout << 4 << endl;
	return 0;
}
