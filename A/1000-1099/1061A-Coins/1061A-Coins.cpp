#include <iostream>
using namespace std;

int main(){
	long n,s;
	cin >> n >> s;
	cout << (s/n) + ((s%n != 0) ? 1:0) << endl;
	return 0;
}
