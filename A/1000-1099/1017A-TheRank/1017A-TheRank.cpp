#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int pos = 1;
	int score,s,s1,s2,s3,s4;
	cin >> s1 >> s2 >> s3 >> s4;
	score = s1+s2+s3+s4;
	for(int i = 1; i < n; i++){
		cin >> s1 >> s2 >> s3 >> s4;
		s = s1+s2+s3+s4;
		if(s > score) pos++;
	}
	cout << pos << endl;
	return 0;
}
