#include <string.h>
#include <iostream>
using namespace std;

int main(){
	string day;
	getline(cin,day);
	int x = 0,candies = 0;
	bool month;
	for(int i = 0,space = 0; i < day.size(); i++){
		if(day[i] == ' ') space++;
		if(space == 0){
			x *= 10;
			x += (day[i]-48);
		}
		if(space == 2){
			if(day[i+1] == 'w') month = false;
			else month = true;
			break;
		}
	}
	if(month){
		if(x <= 29) candies = 12; //leap year
		else{
			if(x == 30) candies = 11;
			else candies = 7;
		}
	}
	else{
		if(x > 4 && x < 7) candies++; //366 - 364 && day 4 == 1
		int year = 366;
		candies += (year/7);
	}
	cout << candies << endl;
	return 0;
}
