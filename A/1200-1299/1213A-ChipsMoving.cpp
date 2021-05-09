#include <iostream>
using namespace std;

int main(){
	int n; 
	cin >> n;
	long e,o;
	long long chip;
	e = o = 0;
	for(int i = 0; i < n; i++){
		cin >> chip;
		if(chip%2 == 0){e++;}
		else{o++;}
	}
	cout << ((e>o) ? o : e) << endl;
	return 0;
}
