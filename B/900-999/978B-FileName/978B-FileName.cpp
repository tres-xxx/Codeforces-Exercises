#include <vector>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector <char> fileN;
	char letter;
	for(int i = 0; i < n; i++){
		cin >> letter;
		fileN.push_back(letter);
	}
	int pos = 1;
	int deleted = 0;
	for(int i = 1; i < (fileN.size()-1) && fileN.size() > 2;){
		if(fileN[i] == 'x'){
			if(fileN[i-1] == 'x' && fileN[i+1] == 'x'){
				deleted++;
				fileN.erase(fileN.begin()+i);
				//cout << fileN.size() << endl;
			}
			else i++;
		}
		else i++;
	}
	cout << deleted << endl;
	return 0;
}
