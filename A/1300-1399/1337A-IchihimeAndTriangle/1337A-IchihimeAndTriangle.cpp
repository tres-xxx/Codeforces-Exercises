#include <string>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long int a,b,c,d,x,y,z;
	string ans[t];
	for(int i = 0; i < t; i++){
		cin >> a >> b >> c >> d;
		x = a;
		y = c;
		z = c;
		ans[i] = to_string(x) + " " + to_string(y) + " " + to_string(z); 
	}
	for(int i = 0; i < t; i++){ cout << ans[i] << endl; }
	return 0;
}
