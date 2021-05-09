#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int cards=0;
	for(int i = 0; i<n; i++){
		int newcard;
		cin >> newcard;
		cards *= 10;
		cards += newcard;
	}
	
	while(cards > 9 && cards%90 != 0)
		cards = cards/10;
	
	if(cards == 0 || cards%90 == 0) cout << cards;
	return 0;
}