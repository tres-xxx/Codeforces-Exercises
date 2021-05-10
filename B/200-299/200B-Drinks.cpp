#include <iostream>
using namespace std;

int main() {
	long double d;
	long double sum = 0;
	cin >> d;
	for(int i = 0; i < d; i++){
		int n;
		cin >> n;
		sum += n;
	}
	long double so = (sum/(d*100))*100;
	cout << so;
	return 0;
}