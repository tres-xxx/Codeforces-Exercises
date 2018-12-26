#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int posmx,posmn,t;
	for(int i = 1; i <= n; i++){
		cin >> t;
		if(t == 1) posmn = i;
		if(t == n) posmx = i;
	}
	//first case
	posmx = ((posmx-1)>(n-posmx)) ? (posmx-1) : (n-posmx);
	posmn = ((posmn-1)>(n-posmn)) ? (posmn-1) : (n-posmn);
	t =  (posmx > posmn) ? posmx : posmn;
	cout << t << endl;
	return 0;
}
