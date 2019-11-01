#include <iostream>
using namespace std;

int main(){
	int a[4];
	for(int i = 0; i < 4; i++){
		cin >> a[i]; 
	}
	int l,r;
	int t;
	for(int i = 0; i < 4; i++){
		l = a[i];
		r = 0;
		for(int j = i-1; j>=0; j--){
			r += a[j];
		}
		for(int j = i+1; j<4; j++){
			r += a[j];
		}
		if(l == r){
			cout << "YES" << endl;
			return 0;
		}
		for(int j = i+1; j < 3; j++){
			r = 0;
			t = l+a[j];
			for(int k = i-1; k>=0; k--){
				r += a[k];
			}
			for(int k = i+1; k<j; k++){
				r += a[k];
			}
			for(int k = j+1; k<4; k++){
				r += a[k];
			}
			if(r == t){
				cout << "YES" << endl;
				return 0;
			}
		}
		for(int j = i+2; j < 3; j = j+2){
			r = 0;
			t = l+a[j-1]+a[j];
			for(int k = i-1; k>=0; k--){
				r += a[k];
			}
			for(int k = i+1; k<(j-1); k++){
				r += a[k];
			}
			for(int k = j+1; k<4; k++){
				r += a[k];
			}
			if(r == t){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
