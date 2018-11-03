#include <iostream>
using namespace std;

int main(){
	int n; // number of cards
	int five,zero;
	five = zero = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int dumm;
		cin >> dumm;//there is a problem trying to put cin inside the value for switch
		switch (dumm){
			case 0 : zero++; break;
			case 5 : five++; break;
			default: "nothing?";
		}
	}
	if(five >= 9 && zero != 0){
		five /= 9;
		for(int i = 0; i < five; i++)
			cout << "555555555"; //because of euclidian algorithm the minimal number is 9's 5
		for(int i = 0; i < zero; i++)
			cout << "0"; //all the numbers that finish in zero are also module of 90
	}
	else{
		if(zero != 0) cout << "0"; // The exclusive case in which the number is less than 9 and there is at least one zero.
		else cout << "-1";
	}
	return 0;
}