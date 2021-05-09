#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
	long long a,b,c,d,t;
	cin >> a >> b;
	if(a > b){
		t = a;
		a = b;
		b = t;
	}
	cin >> c >> d;
	if(b > c){
		if(a > c){
			t = c;
			c = b;
			b = a;
			a = t;
		}
		else{
			t = b;
			b = c;
			c = t;
		}
	}
	long long s = 0;
	if(a < 0){
		if(b < 0){
			t = abs(a-b);
		}
		else{
			t = abs(a)+b;
		}
	}
	else{
		t = b-a;
	}
	if(t < d){
		s += (d-t);
	}
	if(b < 0){
		if(c < 0){
			t = abs(b-c);
		}
		else{
			t = abs(b)+c;
		}
	}
	else{
		t = c-b;
	}
	if(t < d){
		s += (d-t);
	}
	cout << s << endl;
	return 0;
}
