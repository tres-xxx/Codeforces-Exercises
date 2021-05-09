#include <iostream>
using namespace std;

int main(){
	int t,n; 
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		int num = 1; 
		cout << "1";
		for(int j = 1; j < n; j++){
			if(j%4 == 0 || j%4 == 2){num+=2;}
			cout << " " << num;
		}
		cout << endl;
	}
	return 0;
}
