//solution of user Chris-Perkins posted on github.com

#include <algorithm>
#include <iostream>
using namespace std;

long long get_places_before(long long n){
	if((n/10) != 0){
		//cout << (2 + 2*get_places_before(n/10))<<endl;
		return 2 + 2*(get_places_before(n/10));
	}
	else
		return 0;
}

int main(){
	long long n;
	cin >> n;
	
	long long i1,i2,c,t_n;
	
	i1 = get_places_before(n);
	//cout << "il " << i1 << endl;
	c = 0;
	t_n = n;
	//cout << "----c" << endl;
	while(t_n > 0){
		t_n /= 10;
		c = max((long long)1,c*10);
		//cout << c << endl;
	}
	//cout << "----i2" << endl;
	i2 = 0;
	while(n > 0){
		i2 *= 2;
		if((n/c) != 4) i2 += 1;
		n %= c;
		c /= 10;
		//cout << i2 << endl;
	}
	
	cout << (i1+i2+1) << endl;
	return 0;
}
