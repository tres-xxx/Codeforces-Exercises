#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	long n,k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	if(a[k] == a[k-1] || (k == 0 && a[0] == 1)){
		cout << "-1" << endl;
	}
	else{
		if(k == 0){
			cout << a[0]-1 << endl; //I don't understand
		}
		else{
			cout << a[k-1] << endl;
		}
	}
	return 0;
}
