/**
code from http://www.aichengxu.com/cyvyan/13569.htm
**/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int a,b,ans=0;
	cin >> a >> b;
	for(int i = 2; i <= 5; i++){
		//There are just three ways to reduce
		//1. numbers are already even
		//2. each 3rd part of the number is get it
		//3. each 5th part of the number is get it
		int cnt = 0;
		//cout << "i = " << i << endl;
		while(a%i == 0) a/=i, cnt++;
		//cout << cnt << endl;
		while(b%i == 0) b/=i, cnt--;
		//cout << "----" << endl;
		//cout << cnt << endl;
		ans += abs(cnt);
		//cout << "a= " << a << " b= " << b << endl;
	}
	cout << (a==b ? ans:-1);
	return 0;
}
