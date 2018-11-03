#include <iostream>
#include <math.h>
using namespace std;

int main() {
	/*long long int number;
	cin >> number;
	if(number<10 && (number == 7 || number == 4)) cout << "YES";
	else{
		long long int hnum = log10(number)+1;
		if(hnum%10 == 7 || hnum%10 == 4 ) cout <<"YES";
		else cout << "NO";
	}*/
	char num;
	long long int nnum = 0;
	while(cin >> num)
		if(num == '4' || num == '7') nnum++;
	/*char number[(long long int)pow(10.0,18.0)];
	cin >> number;
	int nnum =0;
	for(int i = 0; number[i] != '\0'; i++)
		if(number[i] == '7' || number[i] == '4') nnum++;*/
	//cout << nnum;
	short int tf = 0;
	if(nnum == 0) tf = 1;
	else{
		for(; nnum >= 1 && tf == 0;){
			if(nnum%10 != 7 && nnum%10 != 4) tf = 1;
			nnum = nnum / 10;
		}
	}
	//if(nnum%10 == 7 || nnum%10 == 4) cout << "YES";
	//else cout << "NO";
	if(tf == 0) cout << "YES";
	else cout << "NO";
	return 0;
}