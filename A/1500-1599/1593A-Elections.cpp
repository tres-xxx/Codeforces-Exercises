#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		long long a,b,c,m;
		cin >> a >> b >> c;
		m = max(max(a,b),c);
		bool e = false;
		if((m == b && m == c) || (m == a && m == b) || (m == a && m == c)){ e = true; }
		
		if(a == m){
			if(e){ cout << 1; }
			else { cout << 0; }
		}
		else{ cout << (m-a)+1; }
		cout << " ";
		if(b == m){
			if(e){ cout << 1; }
			else { cout << 0; }
		}
		else{ cout << (m-b)+1; }
		cout << " ";
		if(c == m){
			if(e){ cout << 1; }
			else { cout << 0; }
		}
		else{ cout << (m-c)+1; }

		cout << endl;
	}
	return 0;
}
