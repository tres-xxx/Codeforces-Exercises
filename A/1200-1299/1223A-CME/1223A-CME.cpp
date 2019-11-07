// I did not understand the problem
// solution from tutorial  https://codeforces.com/blog/entry/70358
#include <iostream>
using namespace std;

int main(){
	int q;
	cin >> q;
	int qi[q];
	long long n;
	for(int i = 0; i < q; i++){
		cin >> n;
		if(n == 2){
			qi[i] = 2;
		}
		else{
			if(n%2 == 0){
				qi[i] = 0;
			}
			else{
				qi[i] = 1;
			}
		}
	}
	for(int i = 0; i < q; i++){
		cout << qi[i] << endl;
	}
	return 0;
}
