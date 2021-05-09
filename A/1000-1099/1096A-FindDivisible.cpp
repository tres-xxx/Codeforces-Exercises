#include <iostream>
using namespace std;

int main(){
	long long T;
	cin >> T;
	long long nr[T][2];
	for(int i = 0; i < T; i++) cin >> nr[i][0] >> nr[i][1];
	for(int i = 0; i < T; i++){
		//if(nr[T][0]*2 > nr[T][1]) cout << nr[T][0] << endl;
		cout << nr[i][0] << " " << nr[i][0]*2 << endl;
	}
	return 0;
}
