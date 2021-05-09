#include <string>
#include <iostream>
using namespace std;

int main(){
	int m;
	cin >> m;
	int gem[6]={};
	string n;
	for(int i = 0; i < m; i++){
		cin >> n;
		switch(n[0]){
			case 'p': gem[0] = 1; break;
			case 'g': gem[1] = 1; break;
			case 'b': gem[2] = 1; break;
			case 'o': gem[3] = 1; break;
			case 'r': gem[4] = 1; break;
			case 'y': gem[5] = 1; break;
		}
	}
	cout << 6-m << endl;
	string gems []={"Power","Time","Space","Soul","Reality","Mind"};
	for(int i = 0; i < 6; i++)
		if(gem[i] == 0) cout << gems[i] << endl;
	
	return 0;
}
