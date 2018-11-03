#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int amazing = 0;
	/*if(n > 1){
		int high,low;
		cin >> high >> low;
		if(low > high){
			int d = low;
			low = high;
			high = d;
			amazing++;
		}
		else if(high>low) amazing++;
		for(int i = 3; i <= n; i++){
			int number;
			cin >> number;
			if(number > high){
				high = number;
				amazing++;
			}
			else{
				if(number < low){
					low = number;
					amazing++;
				}
			} 
		}
	}else cin >> n;*/
	int high, low;
	cin >> high;
	low = high;
	for(int i = 1; i < n; i++){
		int number;
		cin >> number;
		if(number > high){
			high = number;
			amazing++;
		}
		else{
			if(number < low){
				low = number;
				amazing++;
			}
		}
	}
	cout << amazing;
	return 0;
}