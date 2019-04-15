#include <string>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	string t,s;
	cin >> t;
	int i = 0;
	int iter = 1;
	while(i < n){
		s.append(t,i,1);
		iter++;
		i += iter;
	}
	cout << s << endl;
	return 0;
}
