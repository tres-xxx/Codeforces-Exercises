#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long p = 0;
	if(n%2 == 0){
		//long long n2 = 0;
		p = 1;
		for(long long i = 0; i < n/2; i++){
			//n2 *= 2;
			//p += n2;
			p *= 2;
		}
	}
	cout << p << endl;
	return 0;
}
