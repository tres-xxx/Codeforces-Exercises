#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long int ans[t],n;
	for(int i = 0; i < t; i++){
		cin >> n;
		if(n < 3){ ans[i] = 1; }
		else{ 
			if(n%2 == 0){ ans[i] = n/2; }
			else{ ans[i] = (n/2)+1; }
		}
	}	
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}

/**
1 = 1
1 2 = 1
1 2 3 = 3 3
1 2 3 4 = 5 5
1 2 3 4 5 = 5 5 5
1 2 3 4 5 6 = 7 7 7
1 2 3 4 5 6 7 = 7 7 7 7 
**/
