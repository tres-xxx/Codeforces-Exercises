#include <iostream>
using namespace std;

int main(){
	int n; // numbers fibonacci
	//long int nfibo [n];
	/*for(int i = 0; i < n; i++)
		cin >> nfibo[i];
	*/
	cin >> n;
	if(n == 0) cout << "0 0 0";
	else{
		int leftN=0, rightN=1;
		for(;(rightN + leftN) != n;){
			int temp = rightN;
			rightN = leftN + rightN;
			leftN = temp;
		}
		cout << "0 " << leftN << " " << rightN;
	}
	return 0;
}