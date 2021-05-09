#include <iostream>
using namespace std;
#include <math.h>

int main() {
	int n;
	cin >> n;
	int weights[n];
	for(int i = 0; i < n; i++)
		cin >> weights[i];
	int min = std::abs(weights[0] - weights[n-1]);
	int out[2];
	out[0] = n;
	out[1] = 1;
	for(int i = 0; i < n-1; i++){
		if(abs(weights[i]-weights[i+1]) < min){
			out[0] = i+1;
			out[1] = i+2;
			min = abs(weights[i] - weights[i+1]);
		}
	}
	cout << out[0] << " " << out[1];
	return 0;
}