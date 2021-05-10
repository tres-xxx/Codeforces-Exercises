/**
The code has been goten from:
http://www.voidcn.com/article/p-stsuriti-da.html
**/
#include <iostream>
using namespace std;

int main(){
	int n,a;
	cin >> n >> a;
	int ai[n+1];
	for(int i = 0; i < n; i++) cin >> ai[i];
	int output = 0;
	a--; //0 to (n-1) no 1 to n
	int j, j2;
	for(int i = 0; i < n; i++){
		j = a - i;
		j2 = a + i;
		if(j < 0 || j2 >= n){ //out of range
			if(j >= 0){
				if(ai[j] == 1) output++;
			}
			if(j2 <= n){
				if(ai[j2] == 1) output++;
			}
		}
		else{ //inside the range
			if(ai[j] == 1 && ai[j2] == 1){ //there is certainly a criminal
				if(i > 0) output += 2;
				else output++;
			}
		}
	}
	cout << output << endl;
	return 0;
}
