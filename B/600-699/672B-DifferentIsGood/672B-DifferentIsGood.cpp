#include <string>
#include <iostream>
using namespace std;

int main(){
	int si;
	cin >> si;
	string w;
	cin >> w;
	if(si > 26){
		cout << "-1" << endl;
		return 0;
	}
	int alpha[26] = {0};
	int count = 0;
	for(int i = 0; i < si; i++){
		alpha[w[i]-97]++;
		if(alpha[w[i]-97] > 1) count++;
	}
	cout << count << endl;
	return 0;
}
