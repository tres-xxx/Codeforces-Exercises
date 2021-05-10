#include <iostream>
using namespace std;

int main() {
	char borze[200];
	int deco[200];
	cin >> borze;
	int n = 0;
	for(int i = 0; i < 200 && borze[i] != '\0'; i++){
		if(borze[i] == '.'){
			deco[n] = 0;
			n++;
		}
		else{
			if(borze[i] == '-'){
				if(borze[i+1] == '.') deco[n] = 1;
				else deco[n] = 2;
				n++;
				i++;
			}
		}
	}
	for(int i =0; i<n; i++)cout << deco[i];
	return 0;
}