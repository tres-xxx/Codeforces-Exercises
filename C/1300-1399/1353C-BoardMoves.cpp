#include <math.h>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long ans[t],n,s,c,c2,c3;
	for(int i = 0; i < t; i++){
		cin >> n; 
		s = 0;
		if(n%2 == 0){ // even is not counted
			c3 = 1;
			c = 1;
			c2 = 1;
			for(int j = 1; j < n-1; j+=2){ 
				s += 8*c;
				c2 += 2;
				c += c2;
				c3++; // distance to the point nearest to the centre
			}
			s += (((8*c)/2)-c3);
		}else{
			c = 1; // exponent for pow
			c2 = 1; // increment by two c
			for(int j = 1; j < n; j+=2){ 
				s += 8*c;
				c2 += 2;
				c += c2;
			}
		}
		ans[i] = s;
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}

/**
1-4-9-16
8-32-72-128

3-3-3-3-3-3-3 
3-2-2-2-2-2-3   
3-2-1-1-1-2-3   
3-2-1-0-1-2-3   
3-2-1-1-1-2-3   
3-2-2-2-2-2-3   
3-3-3-3-3-3-3
**/
