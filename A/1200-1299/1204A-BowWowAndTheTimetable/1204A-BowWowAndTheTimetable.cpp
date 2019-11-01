#include <string>
#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	int t = s.size()/2;
	if(s.size()%2 == 1){
		for(int i = s.size()-1; i>0; i--){
			if(s[i] == '1'){
				t = t+1;
				break;
			}
		}
	}
	cout << t << endl;
	return 0;
}
