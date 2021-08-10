#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	long long t;
	cin >> t;
	double div = 0;
	double perc = 100;
	for(int i = 0; i < 20; i++){
		perc /=2;
		div += perc;
		perc /=2;
	}
	div /=100;
	while(t--){
		long long n;
		cin >> n;
		long long c1,c2,p2;
		p2 = n*div;
		c2 = p2/2;
		c1 = n-(c2*2);
		if(abs(c1-c2)>1){
			if(c2 > c1){
				c2--;
				c1 += 2;
			}
			else{
				c2++;
				c1 -= 2;
			}
		}
		cout << c1 << " " << c2 << endl;
	}
	return 0;
}

