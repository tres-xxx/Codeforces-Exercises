#include <iostream>
using namespace std;

int main(){
	int x,y,z,a,b,c;
	cin >> x >> y >> z;
	cin >> a >> b >> c;
	if(a >= x){
		int d = (a-x)+b;
		if(d >= y){
			int m = (a+b+c)-(x+y);
			if(m >= z) cout << "YES";
			else cout << "NO";
		}
		else cout << "NO";
	}
	else cout << "NO";
	cout << endl;
	return 0;
}
