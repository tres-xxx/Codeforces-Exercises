#include <iostream>
using namespace std;

int main(){
	long n;
	cin >> n;
	long sum = 1;
	long four = 4;
	for(int i = 1; i < n; i++){
		sum += four;
		four += 4;
	}
	cout << sum << endl;
	return 0;
}
