#include <iostream>
using namespace std;

int different(int a, int b, int c, int d){
	if((a != b) && (a != c) && (a != d)){
		if((b != c) && (b != d)){
			if(c!=d){ return 1;}
		}
	}
	return 0;
};

int main() {
	int pyear;
	cin >> pyear;
	int year[4];
	for(int i = pyear, n = 3; n>=0;n--){ 
		year[n] = i%10;
		i=i/10;
	}
	for(pyear++;pyear<9999;pyear++){
		if(year[3] == 9){
			year[3] = 0;
			if(year[2] == 9){
				year[2] = 0;
				if(year[1]==9){
					year[1] = 0;
					year[0]++;
				}
				else year[1]++;
			}
			else year[2]++;
		}
		else year[3]++;
		if(different(year[0],year[1],year[2],year[3]) == 1) pyear = 9999;
	}
	for(int i=0; i<4; i++) cout << year[i];
	return 0;
}