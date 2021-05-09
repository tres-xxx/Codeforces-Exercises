#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int di[n];
	for(int i = 0; i < (n-1); i++) cin >> di[i];
	int a,b;
	cin >> a >> b;
	int years = 0; 
	for(int i = a-1; i < (b-1); i++) years += di[i];
	cout << years << endl;
	return 0;
}
