#include <iostream>
using namespace std;

int sum(int n){
	int s = 0;
	while(n > 0){
		s += (n%10);
		n/=10;
	}
	return s;
}

int main(){
	int a;
	cin >> a;
	while(sum(a)%4!=0){
		a++;
	}
	cout << a << endl;
	return 0;
}
