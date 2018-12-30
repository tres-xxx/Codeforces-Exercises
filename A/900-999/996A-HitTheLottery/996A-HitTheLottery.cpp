#include <iostream>
using namespace std;

int main(){
	long long n;
	cin >> n;
	//dollar bills = 1,5,10,20,100
	long long n2 = 0;
	int bills = 0;
	while(n2 < n){
		if((n2+100) > n){
			if((n2+20) > n){
				if((n2+10) > n){
					if((n2+5) > n) n2 += 1;
					else n2 += 5;
				}
				else n2 += 10;
			}
			else n2 += 20;
		}
		else n2 += 100;
		bills++;
	}
	cout << bills << endl;
	return 0;
}
