#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char number1[100];
	char number2[100];
	cin >> number1;
	cin >> number2;
	int size = strlen(number2);
	char newn[size+1];
	for(int i = 0; i<size; i++){
		if(number1[i] == number2[i]) newn[i]='0';
		else newn[i] = '1';
	}
	newn[size] = '\0';
	//cout << size;
	cout<<newn;
	return 0;
}