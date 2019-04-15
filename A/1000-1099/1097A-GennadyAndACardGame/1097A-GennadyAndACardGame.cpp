#include <string>
#include <iostream>
using namespace std;

int main(){
	string cardT,cardH[5];
	cin >> cardT;
	bool playC = false;
	for(int i = 0; i < 5; i++){
		cin >> cardH[i];
		if(cardH[i][1] == cardT[1] || cardH[i][0] == cardT[0]) playC = true;
	}
	if(playC) cout << "YES";
	else cout << "NO";
	cout << endl;
	return 0;
}
