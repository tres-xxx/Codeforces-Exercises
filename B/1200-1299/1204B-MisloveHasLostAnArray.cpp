#include <math.h>
#include <iostream>
using namespace std;

int main(){
	int n,l,r;
	cin >> n >> l >> r;
	long long mini,maxi;
	mini = maxi = 0;
	for(int i = l;i > 1; i--){
		mini += pow(2,i-1);
	}
	mini += (n-l+1);
	for(int i = r; i > 1; i--){
		maxi += pow(2,i-1);
		//cout << pow(2,i-1) << " R" << endl;
	}
	//maxi += (1+((n-r)*2));
	maxi += (1+(pow(2,r-1)*(n-r)));
	cout << mini << " " << maxi << endl;
	return 0;
}
