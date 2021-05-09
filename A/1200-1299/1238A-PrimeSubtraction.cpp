#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	//int p[]={2,3,5,7,11};
	string pos[t];
	long long y,x;
	//bool find;
	for(int i = 0; i < t; i++){
		cin >> x >> y;
		/*find = false;
		for(int j = 0; j < (sizeof(p)/sizeof(*p)); j++){
			if(x%p[j] == y%p[j]){
				pos[i] = "YES";
				find = true;
				break;
			}
		}
		if(!find){
			pos[i] = "NO";
		}*/ 
		//all numbers are possible if it is not the inmediately minor number
		// solution from https://github.com/Waqar-107/Codeforces/blob/master/A-set/1238A.%20Prime%20Subtraction.cpp
		
		if(abs(x-y) == 1){
			pos[i] = "NO";
		}
		else{
			pos[i] = "YES";
		}
	}
	for(int i = 0; i < t; i++){
		cout << pos[i] << endl;
	}
	return 0;
}
