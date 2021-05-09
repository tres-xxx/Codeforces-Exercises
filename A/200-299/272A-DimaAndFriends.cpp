#include <iostream>
using namespace std;

int main() {
	int n, t = 0, f = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int ff;
		cin >> ff;
		f += ff;
	}
	n++;
	for(int i = 1; i <= 5; i++){
		if((f+i) % n != 1) t++;
	}
	cout << t;
	return 0;
}