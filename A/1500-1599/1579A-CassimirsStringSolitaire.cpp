#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string s;
	for(int i = 0; i < t; i++){
		cin >> s;
		int a,b,c;
		a = b = c = 0;
		for(int j = 0; j < s.length(); j++){
			switch(s[j]){
				case 'A': a++; break;
				case 'B': b++; break;
				default: c++;
			}
		}
		if(b == (a+c)){cout << "Yes" << endl; }
		else{ cout << "No" << endl; }
	}
	return 0;
}
