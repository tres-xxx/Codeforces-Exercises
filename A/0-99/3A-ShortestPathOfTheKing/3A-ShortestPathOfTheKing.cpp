#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	char king[2],t[2];
	cin >> king[0] >> king[1] >> t[0] >> t[1];
	cout << max(abs(king[0]-t[0]), abs(king[1]-t[1])) << endl;
	while(king[0]!=t[0] || king[1]!=t[1]){
		if(king[0] < t[0]){
			cout << "R";
			king[0]++;
		}
		if(king[0] > t[0]){
			cout << "L";
			king[0]--;
		}
		if(king[1] < t[1]){
			cout << "U";
			king[1]++;
		}
		if(king[1] > t[1]){
			cout << "D";
			king[1]--;
		}
		cout << endl;
	}
	return 0;
}
