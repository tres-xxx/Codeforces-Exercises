#include <math.h>
#include <iostream>
using namespace std;

int main(){
	int t,s,ti; // number of exercises, size array, temporal index
	cin >> t; 
	string nt[t]; // array of round numbers
	int nsum[t][5] = {}; // matrix of answers
	for(int i = 0; i < t; i++){
		cin >> nt[i]; 
		s = nt[i].size()-1; // set pow
		ti = 1; // first number
		for(int j = 0; j < nt[i].size(); j++){
			if(nt[i][j] != '0'){
				nsum[i][ti] = (nt[i][j]-48)*pow(10, s);
				ti++;
			}
			s--;
		}
		nsum[i][0] = ti-1; // save amount of numbers
	}
	for(int i = 0; i < t; i++){
		cout << nsum[i][0] << endl;
		for(int j = 1; j < 5; j++){
			if(nsum[i][j] != 0){
				cout << nsum[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
