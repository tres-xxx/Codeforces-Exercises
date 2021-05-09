#include <math.h>
#include <iostream>
using namespace std;

int main(){
	long long t,n,s,c,r,i,j; 
	cin >> t;
	long long ans[t]; 
	for(i = 0; i < t; i++){
		cin >> n; // get number
		/*for(j = 3; ; j = j+2){
		//for(j = 3; ; j++){
			if(n%j == 0){ // I can arrive to a natural number
				cout << j << endl;
				ans[i] = n/j;
				break;
			}
		}*/
		s = 3;
		c = 2;
		while(true){
			if(n%s == 0){
				ans[i] = n/s;
				break;
			}
			else{
				s = s + pow(2,c);
				c++;
			}
		}
	}
	for(i = 0; i < t; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
