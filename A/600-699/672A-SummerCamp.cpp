//this solution is the one posted in voidcn.com/article/p-cqjusamc-bt.html
#include <iostream>
using namespace std;

int main(){
	int a[2000],b[3];
	int aP = 1; //first position
	for(int i = 1; i <= 500; i++){
		int ii = i;
		int k = 0; 
		while(ii){ //it saves the number in reverse
			b[k++] = ii%10;
			ii /= 10;
		}
		for(int j = k-1; j >= 0; j--) //set the number
			a[aP++] = b[j];
	}
	int n; 
	cin >> n;
	cout << a[n] << endl;
	return 0;
}
