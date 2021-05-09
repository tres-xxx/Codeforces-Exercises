#include <iostream>
using namespace std;

int main(){
	int n; // number of cards
	int one,two,three,four,five,zero;
	one = two = three = four = five = zero = 0;
	cin >> n;
	//int cards[n];
	for(int i = 0; i < n; i++){
		int dumm;
		cin >> dumm;//there is a problem trying to put cin inside the value for switch
		switch (dumm){
			case 0 : zero++; break;
			case 1 : one++; break;
			case 2 : two++; break;
			case 3 : three++; break;
			case 4 : four++; break;
			case 5 : five++; break;
			default: "nothing?";
		}
	}
	
	cout << five << four << three << two << one << zero;
	return 0;
}