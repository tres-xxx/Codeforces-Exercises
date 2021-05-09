#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	int nk[t][2];
	for(int i = 0; i < t; i++) cin >> nk[i][0] >> nk[i][1];
	for(int i = 0; i < t; i++){
		int maxf = nk[i][0]/nk[i][1];
		char letter = 'a';
		if(maxf > 0){
			for(int j = 0; j < nk[i][1]; j++){
				for(int k = 0; k < maxf; k++)
					cout << letter;
				letter++;
			}
		}
		letter = 'a';
		for(int j = nk[i][1]*maxf; j < nk[i][0]; j++)
			cout << letter;
		cout << endl;
	}
	return 0;
}
