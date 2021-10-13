#include <iostream>
using namespace std;

int main(){
	int n;
	int l,r;
	l = r = 0;
	char c;
	cin >> n;
	while(n--){
		cin >> c;
		if(c=='L'){ l++; }
		else{ r++; }
	}
	cout << l+r+1 << endl;
	return 0;
}
