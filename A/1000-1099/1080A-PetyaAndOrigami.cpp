#include <math.h>
#include <iostream>
using namespace std;

int main(){
	double n,k;
	cin >> n >> k;
	int notebooks = ceil((2*n)/k)+ceil((5*n)/k)+ceil((8*n)/k);
	cout << notebooks << endl;
	return 0;
}
