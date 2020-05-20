// I made some mistakes so I've fixed the solution based on the next code
// https://programming-jinnatul.blogspot.com/2019/02/codeforces-1110a-parity-codeforces.html

#include <iostream>
using namespace std;

int main(){
	/*
	long b,k,a;
	cin >> b >> k;
	bool even;
	for(long i = k; i > 0; i--){
		cin >> a;
		if(a%2 == 0 || (b%2 == 0 && i != 1)){
			if(i == k){ even = true; continue;}
			else{continue;}
		}
		else{
			if(i == k){ even = false; continue;}
			if(even){ even = false; }
			else{ even = true;}
		}
	}
	if(even){ cout << "even"; }
	else{ cout << "odd"; }
	cout << endl;*/
	long long b,k,i,count = 0;
	cin >> b >> k;
	long long a[k];
	for(i = 0; i < k; i++){
		cin >> a[i];
		if(a[i]%2 != 0){
			count++; //odd+odd=even
		}
	}
	if(b%2 == 0){ // the end of the addition
		if(a[k-1]%2 == 0){ // the last number is even 
			cout << "even" << endl;
		} else{
			cout << "odd" << endl;
		}
	}
	else{
		//if(a[k-1]%2 != 0){
		//	count--;
		//}
		//count += a[k-1];
		if(count%2 == 0){
			cout << "even" << endl;
		} else{
			cout << "odd" << endl;
		}
	}
	
	return 0;
}
