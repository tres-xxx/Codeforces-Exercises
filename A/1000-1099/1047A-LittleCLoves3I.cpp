#include <iostream>
using namespace std;

int main(){
	long long n;
	cin >> n;
	int mod = n%3;
	if(mod == 0 || mod == 1)
		cout << "1 1 " << n-2 << endl;
	else{
		if(n%3 == 2)
			cout << "1 2 " << n-3 << endl;
	}
	return 0;
}
