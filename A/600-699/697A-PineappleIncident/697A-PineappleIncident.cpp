#include <iostream>
using namespace std;

int main(){
	long long t,s,x;
	cin >> t >> s >> x;
	if((t+s) <= x){
		while((t+s) <= x) t += s;
		if(t == x || (t+1) == x) cout << "YES";
		else cout << "NO";
		/*long long bark;
 		bark = x/s;
 		bark *= s;
 		if((bark-t) == x || (bark-t+1) == x || (bark+t) == x || (bark+t+1) == x) cout << "YES";
		else cout << "NO";*/
	}
	else{ 
		if(t == x) cout << "YES";
		else cout << "NO";
	}
	cout << endl;
	return 0;
}
