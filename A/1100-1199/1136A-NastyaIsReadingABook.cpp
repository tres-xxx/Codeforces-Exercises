#include <iostream>
using namespace std;

int  main(){
	int n,k;
	cin >> n;
	int book[n][2];
	for(int i = 0; i < n; i++) cin >> book[i][0] >> book[i][1];
	cin >> k;
	int remain;
	for(int i = 0,sum=0; i < n; i++){
		if(k >= book[i][0] && k <= book[i][1]){
			remain = n-i;
			break;
		}
	}
	cout << remain << endl;
	return 0;
}
