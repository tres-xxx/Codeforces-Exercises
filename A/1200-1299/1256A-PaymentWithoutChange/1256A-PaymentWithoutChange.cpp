#include <string>
#include <iostream>
using namespace std;

int main(){
	int q;
	cin >> q;
	string an[q];
	long long a,b,n,s;
	for(int i = 0; i < q; i++){
		cin >> a >> b >> n >> s;
		if(((a*n)+b) >= s){ 
			if(s%n > b){ an[i] = "No"; }
			else{ an[i] = "Yes"; }
		}
		else{ an[i] = "No"; }
	}
	for(int i = 0; i < q; i++){
		cout << an[i] << endl;
	}
	return 0;
}
