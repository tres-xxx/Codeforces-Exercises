//This solution of the problem is the one found in codeforces and posted by user Vovuh
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	long long frogs[t] = {};
	long long a,b,k;
	for(int i = 0; i < t; i++){
		cin >> a >> b >> k;
		//(a-b)*(k/2) all the jumps if it is even 
		//a*(k&1) if k is odd there is one more jump
		frogs[i] = (a-b) * 1ll * (k/2) + a * (k&1);
	}
	for(int i = 0; i < t; i++)
		cout << frogs[i] << endl;
	return 0;
}
