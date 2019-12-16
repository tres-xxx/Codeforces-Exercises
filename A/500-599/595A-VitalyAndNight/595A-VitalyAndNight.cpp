#include <iostream>
using namespace std;

int main(){
	int n,m,w1,w2,l;
	cin >> n >> m;
	l = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> w1 >> w2;
			if(w1 == 1 || w2 == 1){ l++; }
		}
	}
	cout << l << endl;
	return 0;
}
