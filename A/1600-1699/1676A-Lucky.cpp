#include <string>
#include <iostream>
using namespace std;

int main(){
	int t,f,s;
	cin >> t;
	while(t--){
		string ticket;
		cin >> ticket;
		f = s = 0;
		for (int i = 0; i < 3; i++){
			string d = "";
			d = d + ticket[i];
			f += (stoi(d));
			d = "";
			d = d + ticket[i+3];
			s += (stoi(d));
		}
		if (f == s) { cout << "YES" << endl; }
		else { cout << "NO" << endl; }
	}
	return 0;
}
