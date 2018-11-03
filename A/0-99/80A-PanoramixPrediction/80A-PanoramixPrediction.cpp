#include <iostream>
using namespace std;

int main() {
	int num1,num2,test;
	cin >> num1 >> num2;
	test = 0;
	for(int i = 2; i < num2 && test == 0; i++ ){
		if(num2%i == 0)	test = i;
		short found = 0;
		if(i != 2){
			for(int j = 2; j<i && found == 0; j++)
				if(i%j == 0) found = 1;
		}
		else found = 1;
		if(found == 0 && i > num1) test = i;
	}
	
	if(num2 == test || test == 0) cout << "YES";
	else cout << "NO";
	return 0;
}