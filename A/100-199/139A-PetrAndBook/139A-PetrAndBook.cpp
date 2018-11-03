#include <iostream>
using namespace std;

int main(){
	int n,t=0,w=0;
	int days[7];
	cin >> n;
	for(int i = 0; i < 7; i++){
		cin >> days[i];
		t+=days[i];
	}
	//Here we search the amount reduced with the total of the addition of ever day
	if(n > t) t = n%t; 
	else t = n;
	if(t != 0){
		n = 0;
		for(int i = 0; i < 7 && w == 0; i++){
			n += days[i];
			if(t <= n) w = i+1;
		}
	}
	else{ //if it the module is zero, then the first number to the right is the day in which finish
		for(int i = 6; w == 0; i--) // does not check if all the days are zero
			if(days[i] != 0) w = i+1;
	}
	cout << w;
	return 0;
}