#include <string>
#include <iostream>
using namespace std;

int main(){
	int t,h;
	cin >> t;
	string s;
	for (int i = 0; i < t; i++){
		cin >> s;
		h = s.size();
		if (h%2 == 0){
			//cout << s.substr(0,h/2) << endl;
			//cout << s.substr(h/2,h) << endl;
			
			if(s.substr(0,h/2) == s.substr(h/2,h)){
				cout << "YES" << endl;
			}
			else { cout << "NO" << endl; }
		}else{ cout << "NO" << endl; }
	}
	return 0;
}
